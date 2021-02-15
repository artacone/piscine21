/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:47:32 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/16 00:21:19 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
