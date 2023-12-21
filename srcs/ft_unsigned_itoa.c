/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:50:35 by aafounas          #+#    #+#             */
/*   Updated: 2023/12/05 15:04:01 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*result;

	if (n == 0)
		return (ft_strdup("0"));
	result = ft_calloc(unsigned_lenght(n) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (n)
	{
		result[unsigned_lenght(n) - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}

int	unsigned_lenght(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
