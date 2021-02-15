/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:57:22 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 18:08:52 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *l, int *r)
{
	int	tmp;

	tmp = *l;
	*l = *r;
	*r = tmp;
}

int	ft_qs_partition(int *tab, int l, int r)
{
	int	x;
	int	less;
	int	i;

	x = tab[r];
	less = l;
	i = l;
	while (i < r)
	{
		if (tab[i] <= x)
		{
			ft_swap(tab + i, tab + less);
			less++;
		}
		i++;
	}
	ft_swap(tab + less, tab + r);
	return (less);
}

void	ft_qs_impl(int *tab, int l, int r)
{
	int	q;

	if (l < r)
	{
		q = ft_qs_partition(tab, l, r);
		ft_qs_impl(tab, l, q - 1);
		ft_qs_impl(tab, q + 1, r);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	if (size)
	{
		ft_qs_impl(tab, 0, size - 1);
	}
}
