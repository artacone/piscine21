/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:03:59 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/03 14:21:24 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					i;

	i = 0;
	stock = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (stock == NULL)
		return (NULL);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		if ((stock[i].copy = ft_strdup(av[i])) == NULL)
		{
			while (i > 0)
			{
				free(stock[--i].copy);
			}
			free(stock);
			return (NULL);
		}
		i++;
	}
	stock[i].str = NULL;
	return (stock);
}
