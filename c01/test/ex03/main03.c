/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:27:31 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/21 18:31:13 by rvertie          ###   ########.fr       */
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

void		ft_div_mod(int a, int b, int *div, int *mod);

int			main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pdiv;
	int *pmod;
	
	a = 42;
	b = 21;
	div = 0;
	mod = 0;
	pdiv = &div;
	pmod = &mod;
	ft_div_mod(a, b, pdiv, pmod);
	ft_putnbr(2);
	ft_putchar('\t');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(*pdiv);
	ft_putchar('\t');
	ft_putnbr(*pmod);
	ft_putchar('\n');
	return (0);
}
