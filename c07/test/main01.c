/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:40:52 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/28 15:48:26 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int			*ft_range(int min, int max);

int			main(int argc, char *argv[])
{
	if (argc < 3)
	{
		return (-1);
	}
	int *arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	for(int i = 0; i < atoi(argv[2]) - atoi(argv[1]); i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	return (0);
}
