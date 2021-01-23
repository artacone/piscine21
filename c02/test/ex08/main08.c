/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 21:08:24 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 21:09:44 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "Aa1:8* bCDsb";
	printf("Aa1:8* bCDsb -- %s\n", ft_strlowcase(str));
	return (0);
}
