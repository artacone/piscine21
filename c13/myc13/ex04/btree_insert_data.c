/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 22:09:21 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/14 00:12:43 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
							void *item,
							int (*cmpf)(void *, void *))
{
	if (*root == NULL)
	{
		*root = btree_create_node(item);
	}
	else if (cmpf(item, (*root)->item) < 0)
	{
		btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
	{
		btree_insert_data(&((*root)->right), item, cmpf);
	}
}
