/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:48:23 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/21 20:55:38 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void		ft_rev_int_tab(int *tab, int size);

int			main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int i = 0;
	while (i < 5)
	{
		ft_putnbr(arr[i]);
		ft_putchar(' ');
		i++;
	}
	ft_rev_int_tab(arr, 5);
	i = 0;
	ft_putchar('\n');
	while (i < 5)
	{
		ft_putnbr(arr[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
