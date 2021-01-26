/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:50:56 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 13:51:53 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_find_next_prime(int nb);

int			main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (-1);
	}
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}

