/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 17:37:50 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/24 18:27:33 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int			ft_strncmp(char *s1, char *s2, unsigned int n);

int			main(void)
{
	char s1[] = "abcde";
	char s2[] = "abc";
	char s3[] = "bcde";
	char s4[] = "";
	char s5[] = "abcde";
	printf("%d\t%d\n", ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
	printf("%d\t%d\n", ft_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
	printf("%d\t%d\n", ft_strncmp(s2, s1, 3), strncmp(s2, s1, 3));
	printf("%d\t%d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
	printf("%d\t%d\n", ft_strncmp(s2, s1, 4), strncmp(s2, s1, 4));
	printf("%d\t%d\n", ft_strncmp(s1, s3, 4), strncmp(s1, s3, 4));
	printf("%d\t%d\n", ft_strncmp(s3, s1, 4), strncmp(s3, s1, 4));
	printf("%d\t%d\n", ft_strncmp(s1, s4, 5), strncmp(s1, s4, 5));
	printf("%d\t%d\n", ft_strncmp(s4, s1, 5), strncmp(s4, s1, 5));
	printf("%d\t%d\n", ft_strncmp(s1, s3, 1), strncmp(s1, s3, 1));
	printf("%d\t%d\n", ft_strncmp(s3, s1, 1), strncmp(s3, s1, 1));
	printf("%d\t%d\n", ft_strncmp(s1, s3, 100), strncmp(s1, s3, 100));
	printf("%d\t%d\n", ft_strncmp(s3, s1, 100), strncmp(s3, s1, 100));
	printf("%d\t%d\n", ft_strncmp(s1, s5, 100), strncmp(s1, s5, 100));
	printf("%d\t%d\n", ft_strncmp(s5, s1, 100), strncmp(s5, s1, 100));
	return (0);
}
