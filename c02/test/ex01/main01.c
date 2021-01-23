/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 22:22:53 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 20:26:02 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *ft_strncpy(char *dest, char *src, unsigned int n);

int			main(void)
{
	char ss[6] = "Hello";
	char ds[8] = "Bye-bye";

	ft_putstr(ss);
	ft_putchar('\t');
	ft_putstr(ds);
	ft_putchar('\n');
	ft_putstr(ss);
	ft_putchar('\t');
	ft_putstr(ft_strncpy(ds, ss, 2));
	ft_putchar('\n');
	ft_putstr(ss);
	ft_putchar('\t');
	ft_putstr(ft_strncpy(ds, ss, 6));
	ft_putchar('\n');
	return (0);
}
