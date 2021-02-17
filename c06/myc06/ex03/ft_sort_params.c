/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:20:11 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/17 03:23:44 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strcmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (*str1 == *str2++)
	{
		if (*str1++ == '\0')
		{
			return (0);
		}
	}
	return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
}

void	ft_sort_str(char *strarr[], int size)
{
	int		i;
	int		j;
	char	flag;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		flag = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(strarr[j], strarr[j + 1]) > 0)
			{
				temp = strarr[j];
				strarr[j] = strarr[j + 1];
				strarr[j + 1] = temp;
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			break ;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 1)
	{
		return (-1);
	}
	ft_sort_str(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
