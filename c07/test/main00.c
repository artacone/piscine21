/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:45:17 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/28 13:56:40 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strdup(char *src);

int			main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (-1);
	}
	printf("%s\n%s\n", ft_strdup(argv[1]), strdup(argv[1]));
	return (0);
}
