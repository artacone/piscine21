/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 00:17:53 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 18:07:17 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
