/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:57:10 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/16 02:51:13 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		s++;
	}
	return (s - str);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (n)
	{
		if (*str1 != *str2++)
		{
			return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
		}
		if (*str1++ == '\0')
		{
			break ;
		}
		n--;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	int		len;

	if (*to_find == '\0')
	{
		return (str);
	}
	s = str;
	len = ft_strlen(to_find);
	while (*s)
	{
		while (*s != *to_find)
		{
			if (*s++ == '\0')
				return ((char *) 0);
		}
		if (ft_strncmp(s, to_find, len) == 0)
			return (s);
		s++;
	}
	return ((char *) 0);
}
