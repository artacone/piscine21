/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:20:59 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 15:42:00 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));
int ft_cmp(int l, int r)
{
	return (l - r);
}

int		main(void)
{
	int arr[2] = {2, 2};
	printf("%d\n", ft_is_sort(arr, 2, &ft_cmp));
	return (0);
}

