/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:01:09 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/16 17:00:12 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(char *str)
{
	char	*s;
	char	c;
	int		sign;
	int		res;

	s = str;
	c = *s++;
	sign = 1;
	res = 0;
	while (ft_is_space(c))
		c = *s++;
	while (c == '-' || c == '+')
	{
		if (c == '-')
		{
			sign *= (-1);
		}
		c = *s++;
	}
	while (ft_is_numeric(c))
	{
		res = res * 10 + (c - '0');
		c = *s++;
	}
	return (sign * res);
}
