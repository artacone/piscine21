/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:41:04 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/07 20:24:04 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	int				key;
	char			*value;
}					t_list;

t_list				*ft_create_elem(int key, char *value);
void				ft_list_push_back(t_list **begin_list,
										int key, char *value);
void				ft_list_clear(t_list *begin_list);
char				*ft_value_from_key(t_list *begin_list, int key);

#endif
