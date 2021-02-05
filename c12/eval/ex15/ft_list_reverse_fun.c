/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 23:23:46 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/04 23:33:27 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*reverse(t_list *head)
{
	t_list *rest;

	if (head == NULL || head->next == NULL)
	{
		return (head);
	}
	rest = reverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return (rest);
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	begin_list = reverse(begin_list);
}
