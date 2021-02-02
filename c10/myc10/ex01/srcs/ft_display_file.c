/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:45:56 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 20:18:14 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		ft_display_file(char *file_name)
{
	int		fd;
	char	buffer[BUFF_SIZE];
	int		size_read;

	if ((fd = open(file_name, O_RDONLY)) == -1)
		ft_formatted_error(errno, file_name);
	else
	{
		while ((size_read = read(fd, buffer, BUFF_SIZE)))
		{
			if (size_read == -1)
			{
				ft_formatted_error(errno, file_name);
				break ;
			}
			else
			{
				if (write(1, buffer, size_read) != size_read)
					ft_formatted_error(errno, "stdout");
			}
		}
		if (close(fd) == -1)
			ft_formatted_error(errno, file_name);
	}
}
