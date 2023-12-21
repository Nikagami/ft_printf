/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:11:38 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 22:11:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char sep, char const *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (count);
}

static int	ft_subcpy(char *s, char **tab, size_t len, size_t index)
{
	tab[index] = ft_substr(s, 0, len);
	if (!tab[index])
	{
		while (index > 0)
		{
			index--;
			free(tab[index]);
		}
		free(tab);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	end;
	size_t	start;
	int		k;
	char	**tab;

	if (!s)
		return (NULL);
	end = 0;
	k = 0;
	tab = ft_calloc(countword(c, s) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[end] && k < countword(c, s))
	{
		while (s[end] && s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (start != end && !ft_subcpy((char *)s + start, tab, end - start, k))
			return (NULL);
		k++;
	}
	return (tab);
}
