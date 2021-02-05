/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 19:51:48 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/05 21:02:56 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

void ft_list_push_back(t_list **begin_list, void *data);

t_list		*ft_create_elem(void *data)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new)
	{
		new->next = NULL;
		new->data = data;
	}
	return (new);
}

void		crap_a_list(t_list* list)
{
	for (; list != NULL; list = list->next)
		printf("%s ", (char*)list->data);
	printf("\n");
}

int main()
{
	t_list* list = NULL;
	ft_list_push_back(&list, "Ooops..");
	crap_a_list(list);
	ft_list_push_back(&list, "I did it");
	ft_list_push_back(&list, "again! ");
	crap_a_list(list);
	list = NULL;
	ft_list_push_back(&list, "I played with your heart");
	ft_list_push_back(&list, "and got lost in the game");
	crap_a_list(list);
}
