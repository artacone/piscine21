/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:03:59 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/30 13:24:05 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char				*ft_strdup(char *src)
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					i;

	i = 0;
	stock = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!(stock))
		return (stock);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		if (!(stock[i].copy = ft_strdup(av[i])))
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
