/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:49:52 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/24 19:55:49 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strncat(char *dest, char *src, unsigned int nb);

int			main(void)
{
	char s1[10] = "abcde";
	char s2[100] = "abc";
	char s3[100] = "bcde";
	char s4[100] = "";
	char s5[100] = "abcde";
	char s6[100] = "";
	printf("%s\n%s\n\n", ft_strncat(s4, s6, 70), strncat(s4, s6, 70));
	printf("%s\n%s\n\n", ft_strncat(s1, s4, 1), strncat(s1, s4, 1));
	printf("%s\n%s\n\n", ft_strncat(s2, s1, 3), strncat(s2, s1, 3));
	printf("%s\n%s\n\n", ft_strncat(s3, s1, 10), strncat(s3, s1, 10));
	printf("%s\n%s\n\n", ft_strncat(s4, s1, 2), strncat(s4, s1, 2));
	printf("%s\n%s\n\n", ft_strncat(s5, s1, 0), strncat(s5, s1, 0));
	printf("%s\n%s\n\n", ft_strncat(s5, s4, 70), strncat(s5, s4, 70));
	return (0);
}

