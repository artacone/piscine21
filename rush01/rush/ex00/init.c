/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 16:39:23 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/31 20:56:25 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		grid_create(int **grid, char *clues)
{
	int count;
	int count_clues;

	count = 1
	count_clues = 0;
	while (count <= 4 )
	{
		grid[0][count] = argv[count_clues];
		grid[5][count] = argv[count_clues + 8];
		grid[count][0] = argv[count_clues + 16];
		grid[count][5] = argv[count_clues + 24];
		count++;
		count_clues += 2;
	}
}

int			**grid_init(int **grid, char *clues)
{
	grid_create(grid, clues);
	return (grid);
}
