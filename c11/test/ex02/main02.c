/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 00:06:27 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 00:11:39 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int			ft_is_long(char *str)
{
	return (strlen(str) > 10);
}

int ft_any(char **tab, int(*f)(char*));

int		main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_any(argv, &ft_is_long));
	return (0);
}

