/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 22:39:50 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/06 22:53:05 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		parse_dict(char *dict_name)
{
	int		fd;
	char	buffer[BUFF_SIZE];
	int		size_read;

	if ((fd = open(dict_name, O_RDONLY)) == -1)
		ft_putstr("Dict Error\n");
	else
	{
		while ((size_read = read(fd, buffer, BUFF_SIZE)))
		{
			if (size_read == -1)
			{
				ft_putstr("Dict Error\n");
				break ;
			}
			else
			{
				//FIXME
			}
		}
		if (close(fd) == -1)
			ft_putstr("Dict Error\n");
	}
	return ;
}
