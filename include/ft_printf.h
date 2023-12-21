/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:34:15 by aafounas          #+#    #+#             */
/*   Updated: 2023/12/05 15:03:18 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

int		ft_printpointer(void *ptr);
int		ft_printf(const char *str, ...);
int		ft_check(va_list args, const char format);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printhexa(unsigned long n, char c);
int		ft_printpercent(void);
int		ft_printunsignednbr(unsigned int n);
char	*ft_unsigned_itoa(unsigned int n);
int		unsigned_lenght(unsigned int n);

#endif
