/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:46:35 by aafounas          #+#    #+#             */
/*   Updated: 2023/12/05 15:03:37 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_check(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_printpointer(va_arg(args, void *));
	else if (format == 'x' || format == 'X')
		len += ft_printhexa(va_arg(args, unsigned int), format);
	else if (format == 'u')
		len += ft_printunsignednbr(va_arg(args, unsigned int));
	else if (format == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	if (!str)
		return (0);
	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_check(args, str[i + 1]);
			i += 2;
		}
		else
		{
			len += ft_printchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
