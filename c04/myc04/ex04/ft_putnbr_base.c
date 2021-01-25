/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:09:21 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/25 23:12:19 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int			nbrcheck(int nbr, char *base, int *stack, int *i)
{
	int radix;

	radix = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		stack[0] = (-1) * (nbr % radix);
		nbr = (nbr / radix) * (-1);
		*i = 1;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	return (nbr);
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
		if (base[i] == '+' || base[i] == '-')
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

void		ft_putnbr_base(int nbr, char *base)
{
	int radix;
	int stack[33];
	int i;

	i = 0;
	if (basecheck(base))
	{
		radix = ft_strlen(base);
		nbr = nbrcheck(nbr, base, stack, &i);
		while (nbr)
		{
			stack[i] = nbr % radix;
			nbr /= radix;
			i++;
		}
		while (i)
		{
			ft_putchar(base[stack[--i]]);
		}
	}
}
