/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapread_internal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:01:35 by ieddard           #+#    #+#             */
/*   Updated: 2021/02/09 22:48:35 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_read_legend(t_map *o, int fd)
{
	int		y;
	char	*buf;
	int		buf_size;

	if (ft_getline(&buf, &buf_size, fd) <= 0)
		return (-1);
	if (buf_size < 6 || buf[buf_size - 2] != '\n')
	{
		free(buf);
		return (-1);
	}
	o->empty = buf[buf_size - 5];
	o->obstacle = buf[buf_size - 4];
	o->full = buf[buf_size - 3];
	y = ft_atoi(buf, buf_size - 5);
	free(buf);
	if (y <= 0 || o->empty == o->obstacle || o->empty == o->full ||
			o->obstacle == o->full || !ft_is_printable(o->empty) ||
			!ft_is_printable(o->obstacle) || !ft_is_printable(o->full))
		return (-1);
	o->size.y = y;
	return (0);
}

int		ft_check_and_copy_line(t_map *output, char *line, int line_num)
{
	int i;
	int x;

	if (output == NULL || output->int_map == NULL || output->char_map == NULL ||
			line == NULL)
		FT_CRIT("wrong arguments");
	x = output->size.x;
	if (line[x] != '\n' || line[x + 1] != '\0')
		return (-1);
	i = 0;
	while (i < x)
	{
		if (line[i] == output->obstacle)
			output->int_map[i][line_num] = 0;
		else if (line[i] == output->empty)
			output->int_map[i][line_num] = 1;
		else
			return (-1);
		output->char_map[i][line_num] = line[i];
		i++;
	}
	return (0);
}

int		ft_read_first_line(t_map *output, int fd)
{
	char	*buf;
	int		buf_size;

	buf = NULL;
	buf_size = 0;
	if (ft_getline(&buf, &buf_size, fd) <= 0)
		return (-1);
	if (buf_size < 3)
	{
		free(buf);
		return (-1);
	}
	output->size.x = buf_size - 2;
	output->int_map = init_int_matrix(output->size);
	output->char_map = init_char_matrix(output->size);
	if (ft_check_and_copy_line(output, buf, 0) < 0)
	{
		free(buf);
		return (-1);
	}
	free(buf);
	return (0);
}

int		ft_read_other_line(t_map *output, int line_num, int fd)
{
	char	*buf;

	buf = malloc(output->size.x + 2);
	if (buf == NULL)
		FT_CRIT("malloc() error");
	buf[output->size.x + 1] = '\0';
	if (read(fd, buf, output->size.x + 1) != output->size.x + 1)
	{
		free(buf);
		return (-1);
	}
	if (ft_check_and_copy_line(output, buf, line_num) == -1)
	{
		free(buf);
		return (-1);
	}
	free(buf);
	return (0);
}

int		ft_read_filedesc(t_map *output, int fd)
{
	char	c;
	int		i;

	if (ft_read_legend(output, fd) < 0 ||
			ft_read_first_line(output, fd) == -1)
		return (-1);
	i = 1;
	while (i < output->size.y)
	{
		if (ft_read_other_line(output, i, fd) < 0)
		{
			clear_map(output);
			return (-1);
		}
		i++;
	}
	if (read(fd, &c, 1) != 0)
	{
		clear_map(output);
		return (-1);
	}
	return (0);
}
