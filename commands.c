/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:24:43 by maragao           #+#    #+#             */
/*   Updated: 2022/11/30 19:54:08 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Troca os 2 primeiros elementos no topo da pilha ‘a’. Não faz nada se houver apenas um ou nenhum elemento.*/

/*t_list	*swap(t_list *stack)
{
	t_list	*temp;
	t_list	*temp2;

	if (lst_size(stack) == 0 || lst_size(stack) == 1)
		return (stack);
	temp = stack;
	temp2 = stack->next;
	stack->next = stack->next->next;
	temp2->next = temp;
	return (temp2);
} */

void	swap(t_list **stack)
{
	t_list *temp;
	t_list *temp2;

	temp = *stack;
	temp2 = *stack;

	temp2 = temp->next;
	temp->next = temp->next->next;
	temp2->next = temp;

	*stack = temp2;
}

/*
Pega o primeiro elemento no topo de ‘b’ e coloca no topo de ‘a’. Não faz nada se b estiver vazio.*/

