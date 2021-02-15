/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:17:19 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 20:21:00 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char str[100] = "Hello, dear friends! Here am I, testing this dumb function\a. \n Cringy \0. Neveren\vding suffer";
	ft_print_memory(str, 100);
	return (0);
}
