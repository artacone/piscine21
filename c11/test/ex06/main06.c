/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:24:00 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 20:26:53 by rvertie          ###   ########.fr       */
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
void		ft_sort_string_tab(char **tab);
	
int			main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 1)
		return (1);
	ft_sort_string_tab(argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
