/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:30:31 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 20:36:43 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	printf("abc -- %d\n", ft_str_is_alpha("abc"));
	printf("ab342c -- %d\n", ft_str_is_alpha("ab342c"));
	printf("aAbCc -- %d\n", ft_str_is_alpha("aAbCc"));
	return (0);
}
