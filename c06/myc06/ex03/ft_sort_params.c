/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:20:11 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/27 15:41:33 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void		ft_sort_str(char *strarr[], int size)
{
	int		i;
	int		j;
	int		flag;
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
		if (!flag)
			break ;
		i++;
	}
}

int			main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 1)
	{
		return (-1);
	}
	ft_sort_str(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
