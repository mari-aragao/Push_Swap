/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:01:15 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 20:09:40 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	lst_add_back(t_list *lst, t_list *new)
{
	t_list	*ptr;

	if (lst == NULL || !lst)
	{
		lst = new;
		lst->next = NULL;
	}
	else
	{
		ptr = lst_last(lst);
		ptr->next = new;
		new->next = NULL;
	}
}
