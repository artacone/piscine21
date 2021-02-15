/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:43:44 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/15 02:39:54 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
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

int		ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		while (*s && !ft_is_alphanumeric(*s))
		{
			s++;
		}
		if (*s && ft_is_lowercase(*s))
		{
			*s = 'A' + (*s - 'a');
		}
		s++;
		while (*s && ft_is_alphanumeric(*s))
		{
			if (ft_is_uppercase(*s))
			{
				*s = 'a' + (*s - 'A');
			}
			s++;
		}
	}
	return (str);
}
