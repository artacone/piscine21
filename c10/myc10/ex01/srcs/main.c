/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:43:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 19:19:02 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		ft_display_stdin();
	}
	else if (argc > 1)
	{
		g_progname = basename(argv[0]);
		i = 1;
		while (i < argc)
		{
			if (!ft_strcmp("-", argv[i]))
			{
				ft_display_stdin();
			}
			else
			{
				ft_display_file(argv[i]);
			}
			i++;
		}
	}
	return (0);
}
