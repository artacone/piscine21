/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:07:32 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/05 23:33:32 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void		ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

t_btree		*btree_create_node(void *item)
{
	t_btree *tree;

	if ((tree = (t_btree*)malloc(sizeof(t_btree))))
	{
		tree->left = NULL;
		tree->right = NULL;
		tree->item = item;
	}
	return (tree);
}

void		btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		applyf(root->item);
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
	}
}

void		btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_infix(root->left, applyf);
		applyf(root->item);
		btree_apply_infix(root->right, applyf);
	}
}

void		btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_suffix(root->left, applyf);
		btree_apply_suffix(root->right, applyf);
		applyf(root->item);
	}
}

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
	if (!cmpf(root->item, to_find))
	{
		return (root->item);
	}
	return (btree_search_item(root->right, data_ref, cmpf));
}

void		btree_insert_data(t_btree **root,
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

int			btree_level_count(t_btree *root)
{
	int ldepth;
	int rdepth;

	if (root)
	{
		ldepth = btree_level_count(root->left) + 1;
		rdepth = btree_level_count(root->right) + 1;
		return ((ldepth > rdepth) ? ldepth + 1 : rdepth + 1);
	}
	return (0);
}


int			main(int argc, char* argv[])
{
	if (argc <= 1)
	{
		return (0);
	}
	t_btree *tree = NULL;
	for(int i = 1; i < argc; i++)
	{
		btree_insert_data(&tree, argv[i], &ft_strcmp);
	}
	btree_apply_prefix(tree, &ft_putstr);
	printf("\n");
	btree_apply_infix(tree, &ft_putstr);
	printf("\n");
	btree_apply_suffix(tree, &ft_putstr);
	printf("\n");
	return (0);
}
