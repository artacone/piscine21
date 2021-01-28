/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:39:09 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/24 20:53:35 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;

	destlen = ft_strlen(dest);
	if (size == 0 || destlen > size)
	{
		return (destlen + ft_strlen(src));
	}
	ft_strlcpy(dest + destlen, src, size - destlen);
	return (destlen + ft_strlen(src));
}
