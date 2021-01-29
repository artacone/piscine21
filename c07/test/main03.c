/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:56:39 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/28 19:17:51 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char		*ft_strjoin(int size, char **strs, char *sep);

int			main(int argc, char *argv[])
{
	if (argc < 1)
	{
		return (-1);
	}
	char *str;
	char sep[] = ", ";

	str = ft_strjoin(argc - 1, argv + 1, sep);
	printf("%s\n", str);
	free(str);
	return (0);
}
