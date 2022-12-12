/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:17:13 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 18:55:43 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_clear(t_list **lst)
{
	t_list	*ptr;
	t_list	*ptr2;

	ptr = *lst;
	while (ptr)
	{
		ptr2 = ptr -> next;
		free(ptr->bin);
		free(ptr);
		ptr = ptr2;
	}
	*lst = NULL;
}
