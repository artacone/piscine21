/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 00:04:03 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 02:22:58 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (!ft_is_lowercase(*s++))
		{
			return (0);
		}
	}
	return (1);
}
