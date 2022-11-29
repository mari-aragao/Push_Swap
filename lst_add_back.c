/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:01:15 by maragao           #+#    #+#             */
/*   Updated: 2022/11/29 20:47:51 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
