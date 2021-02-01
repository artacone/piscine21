/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 16:46:01 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/01 20:54:58 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			constraint_check(int x, int y, int **grid);

void		print_grid(int **grid);

void		print_error(void); 

int			skyscrapers_solver(int x, int y, int **grid)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		grid[x][y] = i;
		if (constraint_check(x, y, grid))
		{
			if (x == 4 && y == 4)
			{
				print_grid(grid);
				return (1);
			}
			else
			{
				if (skyscrapers_solver(1 + x % 4, y + x / 4, grid))
					return (1);
			}
		}
		i++;
	}
	return (0);
}

void		grid_fill(int **grid)
{
	int solved;

	solved = skyscrapers_solver(1, 1, grid);
	if (!solved)
	{
		print_error();
	}
}
