/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:30:48 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/17 01:58:32 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;

	if (nb < 2)
	{
		return (0);
	}
	if (nb < 4)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	i = 5;
	while (i * i <= (unsigned long)nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}
