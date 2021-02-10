/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:56:07 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 20:56:11 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/bsq.h"

void		clear_map(t_map *map)
{
	map->empty = '\0';
	map->obstacle = '\0';
	map->full = '\0';
	if (map->int_map != NULL)
	{
		free_int_matrix(map->int_map, map->size);
		map->int_map = NULL;
	}
	if (map->char_map != NULL)
	{
		free_char_matrix(map->char_map, map->size);
		map->char_map = NULL;
	}
	map->size.x = 0;
	map->size.y = 0;
}
