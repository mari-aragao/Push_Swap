/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:31:20 by maragao           #+#    #+#             */
/*   Updated: 2022/12/10 23:23:01 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] != 0 && (s[i] >= 48 && s[i] <= 57))
		res = (res * 10) + (s[i++] - 48);
	if (s[0] == '-')
		res = -res;
	return (res);
}

long int	ft_atoi_long(char *s)
{
	int			i;
	long int	res;

	i = 0;
	res = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] != 0 && (s[i] >= 48 && s[i] <= 57))
		res = (res * 10) + (s[i++] - 48);
	if (s[0] == '-')
		res = -res;
	return (res);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

void	ft_putnbr(int n)
{
	char	res;

	res = 0;
	if (n == -2147483648)
	{
		write(1,"-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	res = n % 10 + '0';
	write (1, &res, 1);
}

char	*binary_converter(int n)
{
	char	*bin;
	int	i;

	bin = (char *)malloc(9 * sizeof(char));
	i = 8;
	while (i >= 0)
	{
		bin[i] = n % 2;
		n = n / 2;
		i--;
	}
	return (bin);
}
