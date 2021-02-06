/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 22:24:28 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/05 23:34:42 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		*btree_search_item(t_btree *root,
							void *data_ref,
							int (*cmpf)(void *, void *))
{
	void *to_find;

	if (root == NULL)
	{
		return (NULL);
	}
	if ((to_find = btree_search_item(root->left, data_ref, cmpf)))
	{
		return (to_find);
	}
	if (!cmpf(root->item, data_ref))
	{
		return (root->item);
	}
	return (btree_search_item(root->right, data_ref, cmpf));
}
