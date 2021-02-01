/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:45:56 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 00:29:57 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		ft_display_file(char *file_name)
{
	int fd;
	char buffer;
	int r;
	
	if ((fd = open(file_name, O_RDONLY)) == -1)
	{
		ft_putstr("Cannot read file.\n");
	}
	else
	{
		while ((r = read(fd, &buffer, 1)))
		{
			if (r == -1)
			{
				ft_putstr("Cannot read file.\n");
				break ;
			}
			else
			{
				ft_putchar(buffer);
			}
		}
		if (close(fd) == -1)
		{
			ft_putstr("Close() error.\n");
		}
	}
}
