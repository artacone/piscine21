/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:19:51 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/16 01:15:22 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n_left;

	d = dest;
	s = src;
	n_left = size;
	if (n_left != 0)
	{
		while (--n_left != 0)
		{
			*d++ = *s;
			if (*s++ == '\0')
				break ;
		}
	}
	if (n_left == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
