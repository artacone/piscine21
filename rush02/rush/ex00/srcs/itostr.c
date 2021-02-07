/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itostr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 22:40:51 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/07 20:43:38 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		print_number(int nbr, t_list *dict)
{
	ft_putstr(ft_value_from_key(dict, nbr));
	ft_putchar(' ');
}

void		print_triplet(int triplet, t_list *dict)
{
	int h;
	int t;
	int o;

	if ((h = triplet / 100))
	{
		print_number(h, dict);
		print_number(100, dict);
	}
	if ((t = triplet % 100))
	{
		if (t < 20)
			print_number(t, dict);
		else
		{
			ft_putstr(ft_value_from_key(dict, t - triplet % 10));
			ft_putchar(' ');
			if ((o = triplet % 10))
			{
				ft_putstr(ft_value_from_key(dict, o));
				ft_putchar(' ');
			}
		}
	}
}

void		itostr(int nbr, char *dict_name)
{
	t_list	*dict;
	int		size_file;

	size_file = calculate_size_dict(dict_name);
	dict = parse_dict(read_dict(dict_name, size_file), size_file);
	if (nbr / 1000000000)
	{
		print_triplet(nbr / 1000000000, dict);
		print_number(1000000000, dict);
	}
	nbr = nbr % 1000000000;
	if (nbr / 1000000)
	{
		print_triplet(nbr / 1000000, dict);
		print_number(1000000, dict);
	}
	nbr = nbr % 1000000;
	if (nbr / 1000)
	{
		print_triplet(nbr / 1000, dict);
		print_number(1000, dict);
	}
	print_triplet(nbr % 1000, dict);
	ft_list_clear(dict);
	ft_putchar('\n');
}
