/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:43:44 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 21:16:36 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int			ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int			ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char		*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !ft_is_alphanumeric(str[i]))
		{
			i++;
		}
		if (str[i] && ft_is_lowercase(str[i]))
		{
			str[i] = 'A' + (str[i] - 'a');
			i++;
		}
		while (str[i] && ft_is_alphanumeric(str[i]))
		{
			if (ft_is_uppercase(str[i]))
			{
				str[i] = 'a' + (str[i] - 'A');
			}
			i++;
		}
	}
	return (str);
}
