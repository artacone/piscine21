/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:23:37 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 19:43:03 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int			ft_is_space(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
	{
		return (1);
	}
	return (0);
}

int			ft_is_printable(char c)
{
	if (' ' <= c && c <= '~')
	{
		return (1);
	}
	return (0);
}
