/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:18:00 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/24 20:35:18 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char		*ft_strstr(char *str, char *to_find);

int			main(void)
{
	char s1[100] = "abcdefghijklmtinabcdefghijklmtinabcdefghijklmtinkkk";
	char s2[100] = "abc";
	char s3[100] = "fgh";
	char s4[100] = "";
	char s5[100] = "kk";
	printf("%s\n%s\n\n", ft_strstr(s1, s2), strstr(s1, s2));
	printf("%s\n%s\n\n", ft_strstr(s1, s3), strstr(s1, s3));
	printf("%s\n%s\n\n", ft_strstr(s1, s4), strstr(s1, s4));
	printf("%s\n%s\n\n", ft_strstr(s1, s5), strstr(s1, s5));
	printf("%s\n%s\n\n", ft_strstr(s1, "lol"), strstr(s1, "lol"));
	return (0);
}

