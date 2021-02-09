/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:43:02 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/09 22:43:51 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char		**init_char_matrix(t_pair size)
{
	char	**matrix;
	int		i;

	if (!(matrix = (char**)malloc(sizeof(char*) * size.x)))
		FT_CRIT("malloc() failed");
	i = 0;
	while (i < size.x)
	{
		if (!(matrix[i] = (char*)malloc(sizeof(char) * size.y)))
			FT_CRIT("malloc() failed");
		i++;
	}
	return (matrix);
}

int			**init_int_matrix(t_pair size)
{
	int **matrix;
	int i;

	if (!(matrix = (int**)malloc(sizeof(int*) * size.x)))
		FT_CRIT("malloc() failed");
	i = 0;
	while (i < size.x)
	{
		if (!(matrix[i] = (int*)malloc(sizeof(int) * size.y)))
			FT_CRIT("malloc() failed");
		i++;
	}
	return (matrix);
}

void		free_int_matrix(int **matrix, t_pair size)
{
	int i;

	i = 0;
	while (i < size.x)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void		free_char_matrix(char **matrix, t_pair size)
{
	int i;

	i = 0;
	while (i < size.x)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
