/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:24:44 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 18:56:07 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_new(int content)
{
	t_list	*ptr;

	ptr = (t_list *) malloc (sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->index = 0;
	ptr->bin = NULL;
	ptr->next = NULL;
	return (ptr);
}
