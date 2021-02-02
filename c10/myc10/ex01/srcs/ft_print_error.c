/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:46:14 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 18:05:09 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		ft_print_error(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		write(2, str + i, 1);
		i++;
	}
}

void		ft_formatted_error(int errn, char *str)
{
	ft_print_error(g_progname);
	ft_print_error(": ");
	ft_print_error(str);
	ft_print_error(": ");
	ft_print_error(strerror(errn));
	ft_print_error("\n");
}
