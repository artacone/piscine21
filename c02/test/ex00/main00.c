/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:35:58 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/22 21:51:55 by rvertie          ###   ########.fr       */
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

char		*ft_strcpy(char *dest, char *src);

int			main(void)
{
	char ss[6] = "Hello\0";
	char ds[8] = "Bye-bye\0";

	ft_putstr(ss);
	ft_putchar('\t');
	ft_putstr(ds);
	ft_putchar('\n');
	ft_putstr(ss);
	ft_putchar('\t');
	ft_putstr(ft_strcpy(ds, ss));
	ft_putchar('\n');
	return (0);
}
