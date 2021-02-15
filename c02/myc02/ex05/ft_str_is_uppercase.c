/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 00:07:00 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 02:23:50 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (!ft_is_uppercase(*s++))
		{
			return (0);
		}
	}
	return (1);
}
