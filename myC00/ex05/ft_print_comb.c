/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:10:31 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/20 23:40:16 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_triplet(char h, char t, char o)
{
	ft_putchar(h);
	ft_putchar(t);
	ft_putchar(o);
}

void		comb_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void		ft_print_comb(void)
{
	char h;
	char t;
	char o;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			o = t + 1;
			while (o <= '9')
			{
				print_triplet(h, t, o);
				if (!(h == '7' && t == '8' && o == '9'))
				{
					comb_separator();
				}
				o++;
			}
			t++;
		}
		h++;
	}
}
