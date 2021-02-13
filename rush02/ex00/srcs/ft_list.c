/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:41:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/07 20:36:39 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_list		*ft_create_elem(int key, char *value)
{
	t_list	*new;
	int		i;

	new = (t_list*)malloc(sizeof(t_list));
	if (new)
	{
		new->next = NULL;
		new->key = key;
		new->value = (char*)malloc(sizeof(char) * (ft_strlen(value) + 1));
		i = 0;
		while (*value)
		{
			new->value[i++] = *value++;
		}
		new->value[i] = '\0';
	}
	return (new);
}

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	tmp = begin_list;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
	}
	return (tmp);
}

void		ft_list_push_back(t_list **begin_list, int key, char *value)
{
	t_list *last;

	last = *begin_list;
	if (last)
	{
		last = ft_list_last(last);
		last->next = ft_create_elem(key, value);
	}
	else
	{
		*begin_list = ft_create_elem(key, value);
	}
}

void		ft_list_clear(t_list *begin_list)
{
	t_list *tmp;

	while (begin_list)
	{
		tmp = begin_list;
		begin_list = begin_list->next;
		free(tmp->value);
		free(tmp);
	}
}

char		*ft_value_from_key(t_list *begin_list, int key)
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (tmp->key == key)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return ("YOU PICKED THE WRONG HOUSE FOOL");
}
