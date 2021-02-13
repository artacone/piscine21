/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 16:50:36 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/01 20:48:13 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_grid(int **grid)
{
	int i = 1;
	int j = 1;
	while (i <= 4)
	{
		while (j <= 4)
		{
			ft_putchar(grid[j][i] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}

void		print_full_grid(int **grid)
{
	int i = 0;
	int j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			ft_putchar(grid[j][i] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void		print_error(void)
{
	write(1, "Error\n", 6);
}
