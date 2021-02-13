/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:12:25 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 18:13:23 by rvertie          ###   ########.fr       */
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
		r_print_line(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			r_print_line(x, 'B', ' ', 'B');
			y--;
		}
		if (y)
		{
			r_print_line(x, 'A', 'B', 'C');
		}
	}
}
