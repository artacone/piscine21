/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:46:39 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 18:36:27 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char		*ft_strlowcase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_uppercase(str[i]))
		{
			str[i] = 'a' + (str[i] - 'A');
		}
		i++;
	}
	return (str);
}
