/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 22:40:17 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/29 23:00:06 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void		set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int			main(void)
{
	t_point point0 = {0, 0};
	t_point *point = &point0;
	printf("(%d, %d)\n", point->x, point->y);
	set_point(point);
	printf("(%d, %d)\n", point->x, point->y);
	return (0);
}
