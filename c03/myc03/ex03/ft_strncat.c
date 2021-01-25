/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:41:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/24 19:46:07 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	ft_strncpy(dest + ft_strlen(dest), src, nb);
	//FIXME
	return (dest);
}
