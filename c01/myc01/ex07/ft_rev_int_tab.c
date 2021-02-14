/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:37:00 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/14 17:38:32 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *l, int *r)
{
	int	tmp;

	tmp = *l;
	*l = *r;
	*r = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_swap(tab + i, tab + size - 1);
		i++;
		size--;
	}
}
