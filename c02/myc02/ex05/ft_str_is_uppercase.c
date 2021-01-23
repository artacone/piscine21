/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 00:07:00 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 18:40:23 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int			ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_is_uppercase(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
