/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:43:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/20 00:20:23 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src) + 1;
	if ((dest = (char *)malloc(len)) == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(dest, src));
}
