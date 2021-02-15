/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:41:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/16 01:49:34 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	if (nb != 0)
	{
		while (*d != '\0')
		{
			d++;
		}
		while (nb-- != 0)
		{
			*d = *s;
			if (*s++ == 0)
				break ;
			d++;
		}
		*d = '\0';
	}
	return (dest);
}
