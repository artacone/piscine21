/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 19:22:51 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/31 20:41:36 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			col_clue_check_d(int x, int y, int **grid);
int			col_clue_check_u(int x, int y, int **grid);
int			row_clue_check_r(int x, int y, int **grid);
int			row_clue_check_l(int x, int y, int **grid);

int			latin_check(int x, int y, int **grid)
{
	int i;

	i = 1;
	while (i < x)
	{
		if (grid[i][y] == grid[x][y])
		{
			return (0);
		}
		i++;
	}
	i = 1;
	while (i < y)
	{
		if (grid[x][i] == grid[x][y])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int			constraint_check(int x, int y, int **grid)
{
	if (!latin_check(x, y, grid))
	{
		return (0);
	}
	if (!row_clue_check_r(x, y, grid))
	{
		return (0);
	}
	if (!row_clue_check_l(x, y, grid))
	{
		return (0);
	}
	if (!col_clue_check_u(x, y, grid))
	{
		return (0);
	}
	if (!col_clue_check_d(x, y, grid))
	{
		return (0);
	}
	return (1);
}

