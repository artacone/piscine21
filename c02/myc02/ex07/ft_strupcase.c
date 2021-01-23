/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:38:54 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 18:37:18 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char		*ft_strupcase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_lowercase(str[i]))
		{
			str[i] = 'A' + (str[i] - 'a');
		}
		i++;
	}
	return (str);
}
