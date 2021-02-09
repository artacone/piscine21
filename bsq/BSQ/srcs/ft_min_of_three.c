/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_of_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:44:44 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/08 15:45:14 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			ft_min_of_three(int first, int second, int third)
{
	int smallest;

	smallest = first;
	if (smallest > second)
	{
		smallest = second;
	}
	if (smallest > third)
	{
		smallest = third;
	}
	return (smallest);
}
