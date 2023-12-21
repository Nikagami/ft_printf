/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:47:21 by aafounas          #+#    #+#             */
/*   Updated: 2023/12/05 14:56:18 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printhexa(unsigned long n, char c)
{
	char	*hex;
	int		i;

	i = 0;
	if (c == 'x')
		hex = ft_strdup("0123456789abcdef");
	else
		hex = ft_strdup("0123456789ABCDEF");
	if (n < 16)
	{
		i += write(1, &hex[n % 16], 1);
		free(hex);
		return (i);
	}
	i += ft_printhexa(n / 16, c);
	i += write(1, &hex[n % 16], 1);
	free(hex);
	return (i);
}
