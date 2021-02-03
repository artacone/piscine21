/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:43:04 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/03 20:47:12 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[j], tab[j + 1]) > 0)
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
