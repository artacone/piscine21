/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:15:01 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 18:54:10 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_size(char **tab)
{
	int	size;

	size = 0;
	while (tab[size])
	{
		size++;
	}
	return (size);
}

void	ft_swap(char **l, char **r)
{
	char	*tmp;

	tmp = *l;
	*l = *r;
	*r = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	flag;
	int	size;

	i = 0;
	size = ft_size(tab);
	while (i < size - 1)
	{
		flag = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(tab + j, tab + j + 1);
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			break ;
		i++;
	}
}
