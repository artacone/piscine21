/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 23:23:46 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 23:05:01 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*reverse(t_list **head_ref)
{
    t_list	*prev;
    t_list	*current;
    t_list	*next;

	prev = NULL;
	current = *head_ref;
	next = NULL;
    while (current != NULL)
	{
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
/*
t_list	*reverse(t_list *head)
{
	t_list	*rest;

	if (head == NULL || head->next == NULL)
	{
		return (head);
	}
	rest = reverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return (rest);
}
*/

void	ft_list_reverse_fun(t_list *begin_list)
{
	begin_list = reverse(&begin_list);
}
