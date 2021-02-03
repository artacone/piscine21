/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 22:04:48 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 23:58:23 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int *res;
	int i;

	if (!(res = (int*)malloc(sizeof(int) * length)))
	{
		return (res);
	}
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
