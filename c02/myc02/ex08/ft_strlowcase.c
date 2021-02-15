/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:46:39 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 02:28:31 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (ft_is_uppercase(*s))
		{
			*s = 'a' + (*s - 'A');
		}
		s++;
	}
	return (str);
}
