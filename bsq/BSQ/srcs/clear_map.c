/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 18:42:00 by ieddard           #+#    #+#             */
/*   Updated: 2021/02/09 22:45:55 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	clear_map(t_map *map)
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
