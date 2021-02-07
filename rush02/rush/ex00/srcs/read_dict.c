/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:54:10 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/07 18:35:26 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			calculate_size_dict(char *dict_name)
{
	int		fd;
	char	buffer[BUFF_SIZE];
	int		size_read;
	int		size_file;

	size_file = 0;
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
				size_file += size_read;
		}
		if (close(fd) == -1)
			ft_putstr("Dict Error\n");
	}
	return (size_file);
}

char		*read_dict(char *dict_name, int size_file)
{
	int		fd;
	char	*dict;
	int		size_read;

	dict = (char*)malloc(sizeof(char) * size_file);
	if ((fd = open(dict_name, O_RDONLY)) == -1)
		ft_putstr("Dict Error\n");
	else
	{
		size_read = read(fd, dict, size_file);
		if (size_read != size_file)
		{
			ft_putstr("Dict Error\n");
		}
		if (close(fd) == -1)
			ft_putstr("Dict Error\n");
	}
	return (dict);
}
