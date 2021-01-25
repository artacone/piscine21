/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:42:33 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/25 16:57:16 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_atoi(char *str);

int			main(int argc, char* argv[])
{
	if (argc == 0)
	{
		return (-1);
	}
	char *str = argv[1];
	printf("ft_atoi: %d\natoi: %d\n", ft_atoi(str), atoi(str));
	return (0);
}
