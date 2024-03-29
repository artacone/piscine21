/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 23:30:38 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 02:20:45 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (!ft_is_alpha(*s++))
		{
			return (0);
		}
	}
	return (1);
}
