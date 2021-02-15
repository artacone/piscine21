/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 17:34:11 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 23:36:35 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (n)
	{
		if (*str1 != *str2++)
		{
			return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
		}
		if (*str1++ == '\0')
		{
			break ;
		}
		n--;
	}
	return (0);
}
