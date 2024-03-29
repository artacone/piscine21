/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:57:39 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 20:57:41 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/error.h"
#include "../includes/bsq.h"

int		ft_read_stdin(t_map *output)
{
	if (output == NULL)
		FT_CRIT("wrong arguments");
	return (ft_read_filedesc(output, STDIN_FILENO));
}

int		ft_read_filename(t_map *output, char *filename)
{
	int fd;
	int ret;

	if (output == NULL || filename == NULL)
		FT_CRIT("wrong arguments");
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	ret = ft_read_filedesc(output, fd);
	if (close(fd) == -1)
		FT_CRIT("closing file");
	return (ret);
}
