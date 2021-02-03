/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:15:01 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 20:41:05 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int			ft_size(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
	{
		size++;
	}
	return (size);
}

void		ft_swap(char **l, char **r)
{
	char *temp;

	temp = *l;
	*l = *r;
	*r = temp;
}

void		ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		flag;
	int		size;

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
		if (!flag)
			break ;
		i++;
	}
}
