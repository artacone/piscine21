/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:50:31 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 23:56:57 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_square(int n)
{
	return (n * n);
}

int			*ft_map(int *tab, int length, int(*f)(int));

int		main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *arr2 = ft_map(arr, 5, &ft_square);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	return (0);
}
