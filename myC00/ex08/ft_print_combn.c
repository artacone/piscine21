/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:57:13 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/21 15:06:04 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		comb_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_combn(int n)
{
	int perm[n];
	
}
