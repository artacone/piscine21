/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:28:47 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/03 14:56:28 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		s++;
	}
	return (s - str);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	nbr_check(int nbr, char *stack, int *i)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		stack[0] = (-1) * (nbr % 10) + '0';
		nbr = (nbr / 10) * (-1);
		*i = 1;
		return (nbr);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		return (nbr);
	}
	if (nbr == 0)
	{
		ft_putchar('0');
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	char	stack[10];
	int		i;

	i = 0;
	nbr = nbr_check(nbr, stack, &i);
	while (nbr)
	{
		stack[i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	while (i)
	{
		ft_putchar(stack[--i]);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
