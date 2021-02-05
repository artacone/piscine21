/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:08:12 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/04 22:04:55 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list,
							void *data_ref,
							int (*cmp)(),
							void (*free_fct)(void *))
{
	t_list **cur;
	t_list *tmp;

	cur = begin_list;
	while (*cur)
	{
		if (!(*cmp)((*cur)->data, data_ref))
		{
			(*free_fct)((*cur)->data);
			tmp = (*cur)->next;
			free(*cur);
			*cur = tmp;
		}
		else
		{
			cur = &((*cur)->next);
		}
	}
}
