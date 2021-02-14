/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 00:33:46 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/14 14:44:27 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nbr);

int		main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (1);
	}
	ft_putnbr(atoi(argv[1]));
	printf("\n");
	return (0);
}
