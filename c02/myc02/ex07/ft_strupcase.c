/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:38:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 02:26:45 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (ft_is_lowercase(*s))
		{
			*s = 'A' + (*s - 'a');
		}
		s++;
	}
	return (str);
}
