/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 00:04:03 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 18:40:46 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int			ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_is_lowercase(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
