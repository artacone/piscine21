/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:53:15 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 00:12:30 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi_base(char *str, char *base);

int			main(int argc, char* argv[])
{
	if (argc < 3)
	{
		return (-1);
	}
	char *str = argv[1];
	char *base = argv[2];
	printf("ft_atoi_base: %d\natoi: %d\n", ft_atoi_base(str, base), atoi(str));
	return (0);
}
