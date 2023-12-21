/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:37:07 by aafounas          #+#    #+#             */
/*   Updated: 2023/10/28 20:27:57 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			a;
	size_t			b;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (!size && !dest && !src)
		return (0);
	a = ft_strlen(dest);
	b = ft_strlen(src);
	if (size < a)
		return (size + b);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (a + b);
}
