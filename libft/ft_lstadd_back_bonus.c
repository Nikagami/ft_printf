/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:30:29 by aafounas          #+#    #+#             */
/*   Updated: 2023/10/28 19:55:35 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last;

	last = *list;
	if (!list || !new)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	while (last->next)
		last = last->next;
	last->next = new;
}
