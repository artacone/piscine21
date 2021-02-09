/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 23:29:42 by ieddard           #+#    #+#             */
/*   Updated: 2021/02/09 13:12:25 by ieddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_getline(char **line_pointer, int *line_len_pointer, int file)
{
	int		read_ret;
	char	*line;
	int		line_len;
	char	buf;

	if (line_pointer == NULL)
		FT_CRIT("wrong arguments");
	line = NULL;
	line_len = 0;
	while ((read_ret = read(file, &buf, 1)) == 1)
	{
		ft_append_str(&line, buf);
		line_len++;
		if (buf == '\n')
			break ;
	}
	if (read_ret == -1)
		return (-1);
	*line_pointer = line;
	if (line_len_pointer != NULL)
		*line_len_pointer = line_len + 1;
	return (line_len > 0 ? 1 : 0);
}
