/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cluecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 20:38:26 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/31 20:40:53 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			row_clue_check_l(int x, int y, int **grid)
{
	int i;
	int max;
	int count;

	i = 1;
	max = 0;
	count = 0;
	while (i <= x)
	{
		if (grid[i][y] > max)
		{
			max = grid[i][y];
			count++;
		}
		if (count > grid[0][y])
		{
			return (0);
		}
		i++;
	}
	if (count != grid[0][y] && x == 4)
	{
		return (0);
	}
	return (1);
}

int			row_clue_check_r(int x, int y, int **grid)
{
	int i;
	int max;
	int count;

	i = 4;
	max = 0;
	count = 0;
	if (x != 4)
		return (1);
	while (i >= 1)
	{
		if (grid[i][y] > max)
		{
			max = grid[i][y];
			count++;
		}
		i--;
	}
	if (count != grid[5][y])
	{
		return (0);
	}
	return (1);
}

int			col_clue_check_u(int x, int y, int **grid)
{
	int i;
	int max;
	int count;

	i = 1;
	max = 0;
	count = 0;
	while (i <= y)
	{
		if (grid[x][i] > max)
		{
			max = grid[x][i];
			count++;
		}
		if (count > grid[x][0])
		{
			return (0);
		}
		i++;
	}
	if (count != grid[x][0] && y == 4)
	{
		return (0);
	}
	return (1);
}

int			col_clue_check_d(int x, int y, int **grid)
{
	int i;
	int max;
	int count;

	i = 4;
	max = 0;
	count = 0;
	if (y != 4)
		return (1);
	while (i >= 1)
	{
		if (grid[x][i] > max)
		{
			max = grid[x][i];
			count++;
		}
		i--;
	}
	if (count != grid[x][5])
	{
		return (0);
	}
	return (1);
}
