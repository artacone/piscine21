/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:30:19 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/09 14:21:05 by ieddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			ft_atoi(char *str, int size)
{
	int	i;
	int num;

	i = 0;
	num = 0;
	if (str[0] == '0' && size > 1)
		return (-1);
	while (i < size)
	{
		if (!ft_is_numeric(str[i]))
			return (-1);
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num);
}
