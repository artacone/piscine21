/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:37:20 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 20:42:47 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	printf("1234 -- %d\n", ft_str_is_numeric("1234"));
	printf("ab342c -- %d\n", ft_str_is_numeric("ab342c"));
	printf("123bbb -- %d\n", ft_str_is_numeric("123bbb"));
	return (0);
}
