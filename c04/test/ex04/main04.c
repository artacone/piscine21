/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:55:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/25 22:59:24 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void		ft_putnbr_base(int nbr, char *base);

int			main(int argc, char* argv[])
{
	if (argc < 3)
	{
		return (-1);
	}
	int nbr = atoi(argv[1]);
	char *base = argv[2];
	ft_putnbr_base(nbr, base);
	return (0);
}
