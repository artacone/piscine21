/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 00:33:46 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/21 13:46:35 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_nextline(void)
{
	write(1, "\n", 1);
}

void		ft_putnbr(int nb);

int			main(void)
{
	ft_putnbr(-123);
	ft_nextline();
	ft_putnbr(-0);
	ft_nextline();
	ft_putnbr(0);
	ft_nextline();
	ft_putnbr(1234);
	ft_nextline();
	ft_putnbr(-2147483648);
	ft_nextline();
	return (0);
}
