/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 21:49:32 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 21:52:57 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	ft_putchar(nbr + '0');
}

void ft_foreach(int *tab, int length, void(*f)(int));

int		main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	ft_foreach(arr, 5, &ft_putnbr);
	return (0);
}
