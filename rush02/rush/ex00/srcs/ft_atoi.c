/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 22:03:46 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/07 15:39:39 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			ft_atoi(char *str)
{
	int sign;
	int res;
	int i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_is_space(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= (-1);
		}
		i++;
	}
	while (ft_is_numeric(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
