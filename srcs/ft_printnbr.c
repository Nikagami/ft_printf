/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:48:01 by aafounas          #+#    #+#             */
/*   Updated: 2023/12/05 14:48:03 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printnbr(int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_itoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}
