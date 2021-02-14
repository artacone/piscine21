/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:34:59 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/14 15:14:45 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void		ft_print_combn(int n);

int			main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return (1);
	}
	ft_print_combn(atoi(argv[1]));
	printf("\n");
	return (0);
}
