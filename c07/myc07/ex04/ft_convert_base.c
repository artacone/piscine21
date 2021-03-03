/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 20:22:50 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/03 13:21:29 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_is_space(char c);

int	ft_in_base(char c, char *base);

int	basecheck(char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	radix;

	sign = 1;
	res = 0;
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
	return (sign * res);
}

int	nbrcheck(int nbr, char *base, char *stack, int *i)
{
	int radix;

	radix = ft_strlen(base);
	stack[0] = 0;
	if (nbr == -2147483648)
	{
		stack[0] = '-';
		stack[1] = base[(-1) * (nbr % radix)];
		nbr = (nbr / radix) * (-1);
		*i = 2;
		return (nbr);
	}
	if (nbr < 0)
	{
		stack[0] = '-';
		nbr = -nbr;
		return (nbr);
	}
	if (nbr == 0)
	{
		stack[1] = 0;
		*i = 2;
	}
	return (nbr);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		radix;
	char	stack[33];
	int		i;
	char	*res;

	i = 1;
	radix = ft_strlen(base);
	nbr = nbrcheck(nbr, base, stack, &i);
	while (nbr)
	{
		stack[i] = base[nbr % radix];
		nbr /= radix;
		i++;
	}
	if ((res = (char*)malloc(i + 1)) == NULL)
		return (NULL);
	if (stack[0] == '-')
		res[nbr++] = '-';
	while (i > 1)
	{
		res[nbr++] = stack[--i];
	}
	res[nbr] = '\0';
	return (res);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		tmp;
	char	*res;

	if (!basecheck(base_from) || !basecheck(base_to))
	{
		return (NULL);
	}
	tmp = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(tmp, base_to);
	return (res);
}
