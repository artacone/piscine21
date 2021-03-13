/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:43:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 17:42:12 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*g_progname;

int	main(int argc, char *argv[])
{
	int	i;
	int	n_bytes;

	g_progname = basename(argv[0]);
	if (argc < 3 || ft_strcmp(argv[1], "-c") != 0)
	{
		return (-1);
	}
	n_bytes = atoi(argv[2]); // FIXME
	if (argc == 3)
	{
		ft_tail("stdin", n_bytes);
	}
	else
	{
		i = 3;
		while (i < argc)
		{
			if (ft_strcmp(argv[i], "-") == 0)
			{
				ft_tail("stdin", n_bytes);
			}
			else
			{
				ft_tail(argv[i], n_bytes);
			}
			i++;
		}
	}
	return (0);
}
