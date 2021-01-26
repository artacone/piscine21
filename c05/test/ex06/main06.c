/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:38:06 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 13:38:47 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_is_prime(int nb);

int			main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (-1);
	}
	printf("%d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}

