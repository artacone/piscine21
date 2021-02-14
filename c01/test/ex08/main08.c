/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:27:49 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 01:21:25 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(int argc, char *argv[])
{
	int	size;

	if (argc != 2)
	{
		return (1);
	}
	size = atoi(argv[1]);
	int rand_arr[size];
	for (int i = 0; i < size; i++)
	{
		rand_arr[i] =rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", rand_arr[i]);
	}
	printf("\n");
	ft_sort_int_tab(rand_arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", rand_arr[i]);
	}
	printf("\n");
	return (0);
}
