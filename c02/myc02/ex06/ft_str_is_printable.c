/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:30:52 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 02:24:48 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (!ft_is_printable(*s++))
		{
			return (0);
		}
	}
	return (1);
}
