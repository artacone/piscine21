/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:48:38 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 20:50:03 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/error.h"
#include "../includes/bsq.h"

void		bsq_stdin(t_map *map)
{
	if (ft_read_stdin(map) == -1)
	{
		ft_print_error("map error\n");
	}
	else
	{
		draw_bsq(map, search_bsq(map));
		print_map(map);
	}
	clear_map(map);
}

void		bsq_file(t_map *map, char *argv[])
{
	int i;

	i = 0;
	while (argv[++i] != NULL)
	{
		if (ft_read_filename(map, argv[i]) == -1)
		{
			ft_print_error("map error\n");
			continue ;
		}
		draw_bsq(map, search_bsq(map));
		print_map(map);
		clear_map(map);
	}
}

int			main(int argc, char *argv[])
{
	t_map	map;

	map.int_map = NULL;
	map.char_map = NULL;
	if (argc < 1)
	{
		FT_CRIT("no args");
	}
	if (argc == 1)
	{
		bsq_stdin(&map);
	}
	else
	{
		bsq_file(&map, argv);
	}
	return (0);
}
