/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:23:08 by ieddard           #+#    #+#             */
/*   Updated: 2021/02/09 19:14:53 by ieddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_append_str(char **str, char c)
{
	int		len;
	char	*buf;

	if (str == NULL)
		FT_CRIT("invalid argument");
	len = (*str == NULL ? 0 : ft_strlen(*str));
	buf = ft_realloc(*str, len + 1, len + 2);
	if (buf == NULL)
	{
		free(str);
		FT_CRIT("ft_realloc() error");
	}
	buf[len] = c;
	buf[len + 1] = '\0';
	*str = buf;
	return (0);
}
