/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:43:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/28 16:08:27 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char		*ft_strdup(char *src)
{
	char	*dest;
	int		srclen;

	srclen = ft_strlen(src);
	if (!(dest = (char*)malloc(sizeof(char) * (srclen + 1))))
	{
		return (dest);
	}
	while (srclen >= 0)
	{
		dest[srclen] = src[srclen];
		srclen--;
	}
	return (dest);
}
