/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:45:42 by aafounas          #+#    #+#             */
/*   Updated: 2023/10/28 20:38:57 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lenitoa(int n)
{
	int	cpt;

	cpt = 0;
	while (n != 0)
	{
		n = n / 10;
		cpt++;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	int		negatif;
	char	*tab;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negatif = 0;
	if (n < 0)
	{
		negatif = 1;
		n *= -1;
	}
	tab = ft_calloc(ft_lenitoa(n) + negatif + 1, sizeof(char));
	if (!tab)
		return (NULL);
	while (n)
	{
		tab[ft_lenitoa(n) + negatif - 1] = (n % 10) + 48;
		n /= 10;
	}
	if (negatif)
		tab[0] = '-';
	return (tab);
}
