/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:41:41 by maragao           #+#    #+#             */
/*   Updated: 2022/12/13 17:30:11 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	int				index;
	char			*bin;
	struct s_list	*next;
}					t_list;

int			main(int argc, char **argv);
t_list		*fill_stack(char **argv);
void		sort_call(int argc, t_list **stack_a, t_list **stack_b);
int			is_digit(int c);
int			ft_atoi(char *s);
long int	ft_atoi_long(char *s);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_putnbr(int n);
t_list		*lst_new(int content);
void		lst_clear(t_list **lst);
t_list		*lst_last(t_list *lst);
void		lst_add_front(t_list **lst, t_list *new);
void		lst_add_back(t_list *lst, t_list *new);
int			lst_size(t_list *lst);
int			all_checks(int argc, char **argv);
int			check_already_sorted(int argc, char **argv);
int			check_number(char **argv);
int			check_repeated(char **argv);
void		print_stack(t_list *ptr);
void		print_index(t_list *ptr);
void		swap(t_list **stack);
void		swap_a(t_list **stack_a);
void		swap_b(t_list **stack_b);
void		swap_ss(t_list **stack_a, t_list **stack_b);
void		push(t_list **stack1, t_list **stack2);
void		push_a(t_list **stack_a, t_list **stack_b);
void		push_b(t_list **stack_a, t_list **stack_b);
void		rotate(t_list **stack);
void		rotate_a(t_list **stack_a);
void		rotate_b(t_list **stack_b);
void		rotate_rr(t_list **stack_a, t_list **stack_b);
void		reverse_rotate(t_list **stack);
void		reverse_rotate_a(t_list **stack_a);
void		reverse_rotate_b(t_list **stack_b);
void		reverse_rotate_rrr(t_list **stack_a, t_list **stack_b);
void		sort_three(t_list **stack_a);
void		find_two_smallest(t_list **stack_a, t_list **stack_b);
void		sort_five(t_list **stack_a, t_list **stack_b);
void		find_smallest(t_list **stack_a, t_list **stack_b);
void		sort_four(t_list **stack_a, t_list **stack_b);
int			validation(t_list **stack_a, int i);
int			condition(t_list **stack_a, t_list **stack_b, int i);
void		radix_sort(int argc, t_list **stack_a, t_list **stack_b);
int			*sort_array(int argc, int *arr);
int			*create_array(int argc, char **argv);
void		make_index(int argc, char **argv, t_list **stack_a);
char		*create_bin(int n);

#endif
