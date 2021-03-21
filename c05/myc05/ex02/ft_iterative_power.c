/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:37:13 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/21 22:13:15 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
	{
		return (0);
	}
	res = 1;
	while (power > 0)
	{
		if (power & 1)
		{
			res *= nb;
			power--;
		}
		else
		{
			nb *= nb;
			power /= 2;
		}
	}
	return (res);
}
