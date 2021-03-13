/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 23:33:49 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 23:35:06 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_sorted_merge(t_list *l, t_list *r, int (*cmp)())
{
	t_list	*result;

	result = NULL;
	if (l == NULL)
		return (r);
	else if (r == NULL)
		return (l);
	if ((*cmp)(l->data, r->data) <= 0)
	{
		result = l;
		result->next = ft_sorted_merge(l->next, r, cmp);
	}
	else
	{
		result = r;
		result->next = ft_sorted_merge(l, r->next, cmp);
	}
	return (result);
}

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	*begin_list1 = ft_sorted_list_merge(*begin_list1, begin_list2, cmp);
}
