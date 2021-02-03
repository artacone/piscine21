/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:46:48 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/29 23:50:32 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int			main(int argc, char *argv[])
{
	if (argc < 1)
	{
		return (-1);
	}
	struct s_stock_str *stock = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(stock);
	return (0);
}
