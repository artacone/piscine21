/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:55:39 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/04 22:50:32 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (*begin_list)
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
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

t_list		*ft_qs_partition(t_list *head, t_list *end,
							t_list **new_head, t_list **new_end, int (*cmp)())
{
	t_list *pivot;
	t_list *prev;
	t_list *cur;
	t_list *tail;
	t_list *tmp;

	pivot = end;
	prev = NULL;
	cur = head;
	tail = pivot;
	while (cur != pivot)
	{
		if ((*cmp)(cur->data, pivot->data))
		{
			if ((*new_head) == NULL)
				(*new_head) = cur;
			prev = cur;
			cur = cur->next;
		}
		else
		{
			if (prev)
				prev->next = cur->next;
			tmp = cur->next;
			cur->next = NULL;
			tail->next = cur;
			tail = cur;
			cur = tmp;
		}
	}
	if ((*new_head) == NULL)
		(*new_head) == NULL;
	(*new_end) = tail;
	return (pivot);
}

t_list		*ft_qs_impl(t_list *head, t_list *end, int (*cmp)())
{
	t_list *new_head;
	t_list *new_end;
	t_list *tmp;
	t_list *pivot;

	if (!head || head == end)
	{
		return (head);
	}
	new_head = NULL;
	new_end = NULL;
	pivot = ft_qs_partition(head, end, &new_head, &new_end);
	if (new_head != pivot)
	{
		tmp = new_head;
		while (tmp->next != pivot)
			tmp = tmp->next;
		tmp->next = NULL;
		new_head = ft_qs_impl(new_head, tmp, cmp);
		tmp = ft_list_last(new_head);
		tmp->next = pivot;
	}
	pivot->next = ft_qs_impl(pivot->next, new_end, cmp);
	return (new_head);
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	*begin_list = ft_qs_impl(*begin_list,
			ft_list_last(*begin_list),
			cmp);
}
