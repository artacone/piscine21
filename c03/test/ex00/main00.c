/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 17:18:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/24 18:15:34 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int			ft_strcmp(char *s1, char *s2);

int			main(void)
{
	char s1[] = "abcde";
	char s2[] = "abc";
	char s3[] = "bcde";
	char s4[] = "";
	char s5[] = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890";

	printf("%d\t%d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("%d\t%d\n", ft_strcmp(s2, s1), strcmp(s2, s1));
	printf("%d\t%d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("%d\t%d\n", ft_strcmp(s3, s1), strcmp(s3, s1));
	printf("%d\t%d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("%d\t%d\n", ft_strcmp(s4, s1), strcmp(s4, s1));
	printf("%d\t%d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	printf("%d\t%d\n", ft_strcmp(s5, s1), strcmp(s5, s1));
	printf("%d\t%d\n", ft_strcmp(s4, s5), strcmp(s4, s5));
	printf("%d\t%d\n", ft_strcmp(s5, s4), strcmp(s5, s4));
	return (0);
}
