/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:46:14 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/03 17:30:53 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_print_error(char *str)
{
	write(2, str, ft_strlen(str));
}

void	ft_formatted_error(int errn, char *str)
{
	ft_print_error(g_progname);
	ft_print_error(": ");
	ft_print_error(str);
	ft_print_error(": ");
	ft_print_error(strerror(errn));
	ft_print_error("\n");
}
