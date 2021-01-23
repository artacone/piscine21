/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 21:19:27 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 21:47:39 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char ss[] = "Hello";
	char ds_enough[20] = "Bye-Bye";
	char ds_not_enough[3] = "By";
	char ds_zero[0];
	printf("TEST        : %20s| %20s| %5s|\n", "ss:", "ds:", "strlc");
	printf("ENOUGH(20)  : %20s| %20s| %5d|\n", 
			ss, ds_enough, ft_strlcpy(ds_enough, ss, 20));
	printf("NOTENOUGH(3): %20s| %20s| %5d|\n", 
			ss, ds_not_enough, ft_strlcpy(ds_not_enough, ss, 3));
	printf("ZERO        : %20s| %20s| %5d|\n", 
			ss, ds_zero, ft_strlcpy(ds_zero, ss, 0));
	return (0);
}
