/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:24:43 by maragao           #+#    #+#             */
/*   Updated: 2022/12/01 17:39:48 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Troca os 2 primeiros elementos no topo da pilha ‘a’. Não faz nada se houver apenas um ou nenhum elemento.*/

void	swap(t_list **stack)
{
	t_list *temp;
	t_list *temp2;

	if (lst_size(*stack) == 0 || lst_size(*stack) == 1)
		return ;
	temp = *stack;
	temp2 = temp->next;
	temp->next = temp->next->next;
	temp2->next = temp;
	*stack = temp2;
}

/*Desloca todos os elementos da pilha ‘a’ para cima em 1. O primeiro elemento torna-se o último*/

void	rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	if (lst_size(*stack) == 0 || lst_size(*stack) == 1)
		return ;
	temp = *stack;
	temp2 = lst_last(*stack);
	temp3 = temp->next;
	temp2->next = temp;
	temp->next = NULL;
	*stack = temp3;
}

/*Desloca todos os elementos da pilha ‘a’  para baixo em 1.
O último elemento se torna o primeiro.*/

void	reverse_rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;
	t_list	*ptr;
	int		len;

	if (lst_size(*stack) == 0 || lst_size(*stack) == 1)
		return ;
	len = lst_size(*stack);
	temp = *stack;
	ptr = *stack;
	temp2 = lst_last(*stack);
	temp3 = temp->next;
	temp2->next = temp;
	while(--len > 1)
		ptr = ptr->next;
	ptr->next = NULL;
	*stack = temp2;
}

/*Pega o primeiro elemento no topo de ‘b’ e coloca no topo de ‘a’. Não faz nada se b estiver vazio.*/

void	push(t_list *stack1, t_list stack2)
{
	t_list	*temp;

}
