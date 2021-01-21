/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:27:49 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/21 22:12:53 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void		ft_print_arr(int *arr, int size)
{
	int i;
	
	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void		ft_sort_int_tab(int *tab, int size);

int			main(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {5, 4, 3, 2, 1};
	int arr3[5] = {-10, 23, 0, -40, 50};
	int arr4[10] = {1, -1, 2, -3, -5, 68, 0, 902, -1235, 0};

	ft_print_arr(arr1, 5);
	ft_sort_int_tab(arr1, 5);
	ft_print_arr(arr1, 5);

	ft_print_arr(arr2, 5);
	ft_sort_int_tab(arr2, 5);
	ft_print_arr(arr2, 5);

	ft_print_arr(arr3, 5);
	ft_sort_int_tab(arr3, 5);
	ft_print_arr(arr3, 5);

	ft_print_arr(arr4, 10);
	ft_sort_int_tab(arr4, 10);
	ft_print_arr(arr4, 10);

	return (0);
}
