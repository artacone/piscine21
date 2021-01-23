/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:40:35 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 20:42:28 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	printf("abcd -- %d\n", ft_str_is_lowercase("abcd"));
	printf("ab342c -- %d\n", ft_str_is_lowercase("ab342c"));
	printf("abbCb -- %d\n", ft_str_is_lowercase("abbCb"));
	return (0);
}
