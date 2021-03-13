/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:07:27 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 17:40:07 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_tail(char *file_name, int n_bytes)
{
	char	*buf;
	char	*buf_begin;
	int		buf_len;
	int		size_read;
	int		fd;

	if (ft_strcmp(file_name, "stdin") == 0)
	{
		fd = 0;
	}
	else if ((fd = open(file_name, O_RDONLY)) == -1)
	{
		ft_formatted_error(errno, file_name);
		return ;
	}
	if ((buf = (char *)malloc(n_bytes)) == NULL)
	{
		ft_formatted_error(errno, file_name);
		return ;
	}

	buf_len = 0;
	buf_begin = buf;
	while ((size_read = read(fd, buf++, 1)))
	{
		if (size_read == -1)
		{
			ft_formatted_error(errno, file_name);
			return ;
		}
		buf_len++;
		if (buf_len % n_bytes == 0)
		{
			buf_begin = ft_realloc(buf_begin, buf_len, buf_len + n_bytes); 
			buf = buf_begin + buf_len;
		}
	}
	write(1, buf_begin + buf_len - n_bytes, n_bytes);

	if (fd != 0)
	{
		close(fd);
	}
}
