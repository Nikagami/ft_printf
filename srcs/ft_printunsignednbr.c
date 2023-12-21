/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignednbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:49:58 by aafounas          #+#    #+#             */
/*   Updated: 2023/12/05 14:59:59 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printunsignednbr(unsigned int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_unsigned_itoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}
