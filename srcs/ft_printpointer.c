/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:49:20 by aafounas          #+#    #+#             */
/*   Updated: 2023/12/21 16:53:27 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printpointer(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		len += ft_printstr("(nil)");
	else
	{
		len = ft_printstr("0x");
		len += ft_printhexa((unsigned long)ptr, 'x');
	}
	return (len);
}
