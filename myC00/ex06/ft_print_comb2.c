/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:49:53 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/21 00:08:33 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_duplet(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void		print_pair(int first, int second)
{
	print_duplet(first);
	ft_putchar(' ');
	print_duplet(second);
}

void		comb_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void		ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			print_pair(first, second);
			if (!(first == 98 && second == 99))
			{
				comb_separator();
			}
			second++;
		}
		first++;
	}
}
