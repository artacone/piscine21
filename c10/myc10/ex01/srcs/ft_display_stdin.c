/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stdin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:07:27 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/03 17:31:54 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_display_stdin(void)
{
	char	buffer[BUFF_SIZE];
	int		size_read;

	while ((size_read = read(0, buffer, BUFF_SIZE)))
	{
		if (size_read == -1)
		{
			ft_print_error(strerror(errno));
			break ;
		}
		else
		{
			write(1, buffer, size_read);
		}
	}
}
