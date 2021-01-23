/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:43:42 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 20:45:34 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int		main(void)
{
	printf("ABCD -- %d\n", ft_str_is_uppercase("ABCD"));
	printf("AB342C -- %d\n", ft_str_is_uppercase("AB342C"));
	printf("ABBcB -- %d\n", ft_str_is_uppercase("ABBcB"));
	return (0);
}
