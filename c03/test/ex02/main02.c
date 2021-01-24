/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:33:32 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/24 19:39:47 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strcat(char *dest, char *src);

int			main(void)
{
	char s1[10] = "abcde";
	char s2[100] = "abc";
	char s3[100] = "bcde";
	char s4[100] = "";
	char s5[100] = "abcde";
	printf("%s\n%s\n\n", ft_strcat(s1, s4), strcat(s1, s4));
	printf("%s\n%s\n\n", ft_strcat(s2, s1), strcat(s2, s1));
	printf("%s\n%s\n\n", ft_strcat(s3, s1), strcat(s3, s1));
	printf("%s\n%s\n\n", ft_strcat(s4, s1), strcat(s4, s1));
	printf("%s\n%s\n\n", ft_strcat(s5, s1), strcat(s5, s1));
	printf("%s\n%s\n\n", ft_strcat(s5, s4), strcat(s5, s4));
	return (0);
}
