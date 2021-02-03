/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:30:19 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 19:41:58 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int			ft_is_space(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(char *str)
{
	int sign;
	int res;

	sign = 1;
	res = 0;
	while (ft_is_space(*str))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= (-1);
		}
		str++;
	}
	while (ft_is_numeric(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (sign * res);
}
