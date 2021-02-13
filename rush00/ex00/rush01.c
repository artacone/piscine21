/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:27:33 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 16:46:51 by dmyrl            ###   ########.fr       */
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
		r_print_line(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			r_print_line(x, '*', ' ', '*');
			y--;
		}
		if (y)
		{
			r_print_line(x, '\\', '*', '/');
		}
	}
}
