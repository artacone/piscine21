/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:36:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/03 15:12:29 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (*str1 == *str2++)
	{
		if (*str1++ == '\0')
		{
			return (0);
		}
	}
	return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
}
