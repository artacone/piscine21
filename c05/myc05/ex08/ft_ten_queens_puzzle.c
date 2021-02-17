/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:56:03 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/17 03:06:23 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_possible(char *board, int file, int rank)
{
	int	i;

	i = 0;
	while (i < file)
	{
		if (rank == board[i] - '0'
			|| rank + file == board[i] - '0' + i
			|| rank - file == board[i] - '0' - i)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	print_result(char *board)
{
	write(1, board, 11);
}

void	queen_backtracking(int file, char *board, int *placements)
{
	board[file] = '0';
	while (board[file] <= '9')
	{
		if (is_possible(board, file, board[file] - '0'))
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

int	ft_ten_queens_puzzle(void)
{
	char	board[11];
	int		placements;

	placements = 0;
	board[10] = '\n';
	queen_backtracking(0, board, &placements);
	return (placements);
}
