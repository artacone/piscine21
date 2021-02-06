/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:29:05 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/06 22:53:22 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			main(int argc, char *argv[])
{
	if (argc == 2)
	{
		itostr(ft_atoi(argv[1]), "../numbers.dict");
	}
	else if (argc == 3)
	{
		itostr(ft_atoi(argv[2]), argv[1]);
	}
	else
	{
		return (1);
	}
	return (0);
}
