/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:08:59 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 19:47:24 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			op_check(char op, int rvalue)
{
	if (op == '/' && rvalue == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (op == '%' && rvalue == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void		do_op(int lvalue, char op, int rvalue)
{
	int (*ops[11])(int, int);

	ops['%' - 37] = ft_mod;
	ops['*' - 37] = ft_mul;
	ops['/' - 37] = ft_div;
	ops['+' - 37] = ft_sum;
	ops['-' - 37] = ft_sub;
	ft_putnbr(ops[op - 37](lvalue, rvalue));
	ft_putchar('\n');
}
