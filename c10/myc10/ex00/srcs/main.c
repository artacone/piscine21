/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:43:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/03 15:29:38 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		ft_print_error("Too many arguments.\n");
		return (1);
	}
	if (argc < 2)
	{
		ft_print_error("File name missing.\n");
		return (2);
	}
	ft_display_file(argv[1]);
	return (0);
}
