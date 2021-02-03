/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:26:39 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/29 22:32:06 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ft_abs.h"

int			main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (-1);
	}
	int a = -5;
	int b = -3;
	int y = ABS( a ) + 2;
	int y1 = ABS(a+b);
	int y2 = ABS(a=b);
	int y3 = ABS((a<b)?a:b);
	printf("7 ? %d, 8 ? %d, 3 ? %d, 5 ?%d \n", y, y1, y2, y3);
	printf("%d\n", ABS(atoi(argv[1])));
	return (0);
}
