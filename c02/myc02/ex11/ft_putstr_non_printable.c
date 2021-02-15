/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:59:09 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 17:54:22 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putchar_non_printable(char c)
{
	char	hex[3];
	char	*hex_base;

	hex_base = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = hex_base[c / 16];
	hex[2] = hex_base[c % 16];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			*s;

	s = str;
	while (*s)
	{
		i = 0;
		while (ft_is_printable(s[i]))
		{
			i++;
		}
		write(1, s, i);
		s += i;
		if (*s)
		{
			ft_putchar_non_printable(*s);
			s++;
		}
	}
}
