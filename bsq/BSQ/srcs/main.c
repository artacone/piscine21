/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:48:38 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/09 23:50:09 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			main(int argc, char *argv[])
{
	t_map	map;
	int		i;

	if (argc == 1)
	{
		if (ft_read_stdin(&map) == -1)
		{
			ft_print_error("map error\n");
		}
		else
		{
			draw_bsq(&map, search_bsq(&map));
			print_map(&map);
		}
	}
	else
	{
		i = 0;
		while (argv[++i] != NULL)
		{
			if (ft_read_filename(&map, argv[i]) == -1)
			{
				ft_print_error("map error\n");
				continue ;
			}
			draw_bsq(&map, search_bsq(&map));
			print_map(&map);
		}
	}
	return (0);
}
