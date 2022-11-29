/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:41:41 by maragao           #+#    #+#             */
/*   Updated: 2022/11/29 20:48:32 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

int		main(int argc, char **argv);
int		ft_atoi(char *s);
t_list	*lst_new(int content);
void	lst_add_front(t_list **lst, t_list *new);
t_list	*lst_last(t_list *lst);
void	lst_add_back(t_list *lst, t_list *new);
int		ft_strcmp(const char *s1, const char *s2);
t_list *fill_stack_a(int argc, char **argv);
int		check_number(int argc, char **argv);
int		check_repeated(int argc, char **argv);
void	error(void);
void	ft_putnbr(int n);
void	print_stack(t_list *ptr);

#endif
