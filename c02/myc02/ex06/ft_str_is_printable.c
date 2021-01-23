/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:30:52 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 18:39:48 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int			ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_is_printable(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
