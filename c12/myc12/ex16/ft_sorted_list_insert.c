/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 23:06:59 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 23:25:43 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*current;
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (*begin_list == NULL
		|| (*cmp)((*begin_list)->data, new_node->data) >= 0)
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
	else
	{
		current = *begin_list;
		while (current->next != NULL
			&& (*cmp)(current->next->data, new_node->data) < 0)
		{
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}
