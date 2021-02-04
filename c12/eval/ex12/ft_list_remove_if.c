/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:08:12 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/04 18:38:26 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list,
							void *data_ref,
							int (*cmp)(),
							void (*free_fct)(void *))
{
	t_list *tmp;
	t_list *prev;

	prev = *begin_list;
	tmp = *begin_list;
	while (tmp)
	{
		if (!(*cmp)(tmp->data, data_ref))
		{
			//FIXME
			prev->next = tmp->next;
			(*free_fct)(tmp->data);
			free(tmp);
			tmp = prev->next;
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
}
