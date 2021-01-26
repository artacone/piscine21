/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:56:03 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 18:14:56 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_possible(int *board, int file, int rank)
{
	int i;

	i = 0;
	while (i < file)
	{
		if (rank == board[i]
				|| rank + file == board[i] + i
				|| rank - file == board[i] - i)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void		print_result(int *board)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void		queen_backtracking(int file, int *board, int *placements)
{
	board[file] = 0;
	while (board[file] < 10)
	{
		if (is_possible(board, file, board[file]))
		{
			if (file == 9)
			{
				print_result(board);
				*placements += 1;
			}
			else
			{
				queen_backtracking(file + 1, board, placements);
			}
		}
		board[file]++;
	}
}

int			ft_ten_queens_puzzle(void)
{
	int board[10];
	int placements;

	placements = 0;
	queen_backtracking(0, board, &placements);
	return (placements);
}
