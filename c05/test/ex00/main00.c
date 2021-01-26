/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:23:48 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 12:27:03 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_iterative_factorial(int nb);

int			main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (-1);
	}
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
