/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:39:51 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/16 00:15:20 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		s++;
	}
	return (s - str);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*s)
	{
		*d++ = *s++;
	}
	*d = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}
