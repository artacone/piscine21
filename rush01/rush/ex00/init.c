/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 16:39:23 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/01 20:54:13 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		print_grid(int **grid);

void		grid_fill_zeros(int **grid)
{
	int i = 1;
	int j = 1;

	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

}

void		grid_fill_clues(int **grid, char *clues)
{
	int i;
	int i_clues;

	i = 1;
	i_clues = 0;
	while (i <= 4 )
	{
		grid[i++][0] = clues[i_clues] - '0';
		i_clues += 2;
	}
	i = 1;
	while (i <= 4 )
	{
		grid[i++][5] = clues[i_clues] - '0';
		i_clues += 2;
	}
	i = 1;
	while (i <= 4 )
	{
		grid[0][i++] = clues[i_clues] - '0';
		i_clues += 2;
	}
	i = 1;
	while (i <= 4 )
	{
		grid[5][i++] = clues[i_clues] - '0';
		i_clues += 2;
	}
}

int			**grid_init(char *clues)
{
	int **grid;
	int i = 0;
	grid = (int**)malloc(sizeof(int*) * 6);
	while (i < 6)
	{
		grid[i++] = (int*)malloc(sizeof(int) * 6);
	}
	grid_fill_zeros(grid);
	grid_fill_clues(grid, clues);
	return (grid);
}
