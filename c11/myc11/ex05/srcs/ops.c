/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:29:04 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 19:30:03 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			ft_sum(int lvalue, int rvalue)
{
	return (lvalue + rvalue);
}

int			ft_sub(int lvalue, int rvalue)
{
	return (lvalue - rvalue);
}

int			ft_div(int lvalue, int rvalue)
{
	return (lvalue / rvalue);
}

int			ft_mul(int lvalue, int rvalue)
{
	return (lvalue * rvalue);
}

int			ft_mod(int lvalue, int rvalue)
{
	return (lvalue % rvalue);
}
