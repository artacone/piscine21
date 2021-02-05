/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:55:39 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/05 21:27:17 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_front_back_split(t_list *source, t_list **front_ref,
								t_list **back_ref)
{
	t_list *fast;
	t_list *slow;

	slow = source;
	fast = source->next;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	*front_ref = source;
	*back_ref = slow->next;
	slow->next = NULL;
}

t_list		*ft_sorted_merge(t_list *l, t_list *r, int (*cmp)())
{
	t_list *result;

	result = NULL;
	if (l == NULL)
		return (r);
	else if (r == NULL)
		return (l);
	if ((*cmp)(l->data, r->data) <= 0)
	{
		result = l;
		result->next = ft_sorted_merge(l->next, r);
	}
	else
	{
		result = r;
		result->next = ft_sorted_merge(l, r->next);
	}
	return (result);
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *head;
	t_list *l;
	t_list *r;

	head = *begin_list;
	if ((head == NULL) || (head->next == NULL))
	{
		return ;
	}
	ft_front_back_split(head, &l, &r);
	ft_list_sort(&l);
	ft_list_sort(&r);
	*begin_list = ft_sorted_merge(l, r, cmp);
}
