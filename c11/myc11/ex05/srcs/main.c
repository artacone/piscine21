/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:48:38 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 18:49:59 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		return (0);
	}
	else
	{
		if (ft_strcmp(argv[2], "+") && ft_strcmp(argv[2], "-")
			&& ft_strcmp(argv[2], "/") && ft_strcmp(argv[2], "*")
			&& ft_strcmp(argv[2], "%"))
		{
			ft_putstr("0\n");
			return (0);
		}
		if (!op_check(argv[2][0], ft_atoi(argv[3])))
		{
			return (0);
		}
		do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
	}
	return (0);
}
