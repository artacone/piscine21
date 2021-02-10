/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:35:58 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 19:13:37 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		ft_print_error(const char *str)
{
	write(2, str, ft_strlen(str));
}

void		ft_crit(const char *filename, const char *line,
					const char *function, char *err_msg)
{
	char endl;

	endl = '\n';
	ft_print_error("In file ");
	ft_print_error(filename);
	ft_print_error("\nOn line ");
	ft_print_error(line);
	ft_print_error("\nIn function ");
	ft_print_error(function);
	ft_print_error("\nError occured: ");
	ft_print_error(err_msg);
	write(2, &endl, 1);
	exit(-1);
}
