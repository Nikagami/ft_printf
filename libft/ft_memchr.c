/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:11:23 by aafounas          #+#    #+#             */
/*   Updated: 2023/10/28 19:57:27 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sb;

	i = 0;
	sb = (unsigned char *)s;
	while (i < n)
	{
		if (sb[i] == (unsigned char)c)
			return (sb + i);
		i++;
	}
	return (0);
}
