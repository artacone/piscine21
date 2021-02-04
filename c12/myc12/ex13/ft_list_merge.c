/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:39:01 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/04 18:47:31 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *last1;

	last1 = *begin_list1;
	if (last1)
	{
		last1 = ft_list_last(last1);
		last1->next = begin_list2;
	}
	else
	{
		last1 = begin_list2;
	}
}
