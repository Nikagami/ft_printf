/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:50:12 by aafounas          #+#    #+#             */
/*   Updated: 2023/10/28 19:52:05 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cpt;

	cpt = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		cpt++;
	}
	return (cpt);
}
