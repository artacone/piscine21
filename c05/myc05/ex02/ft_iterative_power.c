/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:37:13 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/17 00:42:38 by rvertie          ###   ########.fr       */
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
		res *= nb;
		power--;
	}
	return (res);
}
