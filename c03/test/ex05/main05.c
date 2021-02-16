/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:46:23 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/16 03:06:50 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int			main(void)
{
	char s1[10] = "abcde";
	char s2[100] = "abc";
	char s3[100] = "bcde";
	char s4[100] = "";
	char s5[100] = "abcde";
	char s6[100] = "";
	printf("%d\n", ft_strlcat(s1, s4, 10));
	return (0);
}


