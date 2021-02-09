/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 23:47:45 by ieddard           #+#    #+#             */
/*   Updated: 2021/02/09 19:14:23 by ieddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_realloc(char *ptr, int old_size, int size)
{
	char	*tmp;
	int		i;

	if (old_size >= size)
		return (ptr);
	tmp = malloc(size);
	if (tmp == NULL)
		FT_CRIT("malloc() error");
	if (ptr == NULL)
		return (tmp);
	i = 0;
	while (i < old_size)
	{
		tmp[i] = ptr[i];
		i++;
	}
	free(ptr);
	return (tmp);
}
