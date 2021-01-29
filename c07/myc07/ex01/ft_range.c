/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:38:35 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/28 16:08:33 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int	*range;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	if (!(range = (int*)malloc(sizeof(int) * (max - min))))
	{
		return (range);
	}
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	return (range);
}
