/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:46:26 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 20:53:19 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_str_is_printable(char *str);

int		main(void)
{
	printf("Aa1:8*  -- %d\n", ft_str_is_printable("Aa1:8* "));
	printf("bcd\a -- %d\n", ft_str_is_printable("bcd\a"));
	return (0);
}
