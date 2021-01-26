/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:06:14 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/26 18:13:06 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_ten_queens_puzzle(void);
	
int			main(void)
{
	int result;

	result = ft_ten_queens_puzzle();
	printf("%d\n", result);
	return (0);
}

