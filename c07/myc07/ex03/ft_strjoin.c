/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:09:36 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/20 00:37:39 by rvertie          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		reslen;

	i = 0;
	reslen = 0;
	if (size > 0)
	{
		while (i < size)
		{
			reslen += ft_strlen(strs[i++]);
		}
		reslen += (size - 1) * ft_strlen(sep);
	}
	if ((res = (char *)malloc(reslen + 1)) == NULL)
		return (NULL);
	i = 0;
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i++ < size - 1)
			ft_strcat(res, sep);
	}
	return (res);
}
