/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:56:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 20:57:02 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/bsq.h"

void		print_map(t_map *map)
{
	int i;
	int j;

	j = 0;
	while (j < map->size.y)
	{
		i = 0;
		while (i < map->size.x)
		{
			ft_putchar(map->char_map[i][j]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void		draw_bsq(t_map *map, t_bsq bsq)
{
	int i;
	int j;

	i = bsq.x;
	while (i > bsq.x - bsq.size)
	{
		j = bsq.y;
		while (j > bsq.y - bsq.size)
		{
			map->char_map[i][j] = map->full;
			j--;
		}
		i--;
	}
}
