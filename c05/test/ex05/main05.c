/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:21:52 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 13:22:28 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_sqrt(int nb);

int			main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (-1);
	}
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}

