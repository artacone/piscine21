/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 23:36:07 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/28 23:38:01 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int			main(int argc, char *argv[])
{
	if (argc < 4)
	{
		return (-1);
	}
	char *str;

	str = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", str);
	free(str);
	return (0);
}
