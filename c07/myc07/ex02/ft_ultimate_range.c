/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:54:43 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/20 00:23:13 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(arr = (int *)malloc(sizeof(int) * (max - min))))
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		arr[i++] = min++;
	}
	*range = arr;
	return (i);
}
