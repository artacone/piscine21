/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:22:03 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 00:18:49 by rvertie          ###   ########.fr       */
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

int			ft_in_base(char c, char *base)
{
	unsigned int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int			ft_is_space(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
	{
		return (1);
	}
	return (0);
}

int			basecheck(char *base)
{
	unsigned int i;
	unsigned int j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int			ft_atoi_base(char *str, char *base)
{
	int sign;
	int res;
	int radix;

	sign = 1;
	res = 0;
	if (basecheck(base))
	{
		radix = ft_strlen(base);
		while (ft_is_space(*str))
		{
			str++;
		}
		while (*str == '-' || *str == '+')
		{
			if (*str++ == '-')
				sign *= (-1);
		}
		while (ft_in_base(*str, base) != -1)
		{
			res = res * radix + ft_in_base(*str, base);
			str++;
		}
	}
	return (sign * res);
}
