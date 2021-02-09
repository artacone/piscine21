/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapsolve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:05:22 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/09 22:52:43 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			**build_bsq(t_map *map)
{
	int	**bsq;
	int	i;
	int	j;

	i = 0;
	bsq = init_int_matrix(map->size);
	while (i < map->size.x)
	{
		j = 0;
		while (j < map->size.y)
		{
			if (i == 0 || j == 0)
				bsq[i][j] = map->int_map[i][j];
			else if (map->int_map[i][j] == 0)
				bsq[i][j] = 0;
			else
			{
				bsq[i][j] = 1 + ft_min_of_three(bsq[i - 1][j],
						bsq[i - 1][j - 1], bsq[i][j - 1]);
			}
			j++;
		}
		i++;
	}
	return (bsq);
}

t_bsq		search_bsq(t_map *map)
{
	int		i;
	int		j;
	t_bsq	bsq_pos;
	int		**bsq;

	bsq = build_bsq(map);
	bsq_pos.x = 0;
	bsq_pos.y = 0;
	bsq_pos.size = bsq[0][0];
	j = -1;
	while (++j < map->size.y)
	{
		i = -1;
		while (++i < map->size.x)
		{
			if (bsq[i][j] > bsq[bsq_pos.x][bsq_pos.y])
			{
				bsq_pos.x = i;
				bsq_pos.y = j;
				bsq_pos.size = bsq[i][j];
			}
		}
	}
	free_int_matrix(bsq, map->size);
	return (bsq_pos);
}
