/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:10:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 18:12:00 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		r_print_line(int x, char l, char m, char r)
{
	ft_putchar(l);
	x--;
	while (x > 1)
	{
		ft_putchar(m);
		x--;
	}
	if (x)
	{
		ft_putchar(r);
	}
	ft_putchar('\n');
}

void		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		r_print_line(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			r_print_line(x, 'B', ' ', 'B');
			y--;
		}
		if (y)
		{
			r_print_line(x, 'C', 'B', 'C');
		}
	}
}
