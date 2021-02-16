/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:11:08 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/17 01:37:47 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int				res;
	unsigned int	start;
	unsigned int	end;
	unsigned long	mid;

	res = 0;
	start = 0;
	end = nb / 2 + 1;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == (unsigned long)nb)
		{
			res = mid;
			break ;
		}
		if (mid * mid < (unsigned long)nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (res);
}
