/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 22:39:50 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/07 20:35:50 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		skip_spaces(char *dict, int *i)
{
	while (ft_is_space(dict[*i]))
	{
		(*i)++;
	}
}

void		get_strkey(char *dict, int *i, char *str)
{
	int j;

	j = 0;
	while (ft_is_numeric(dict[*i]))
		str[j++] = dict[(*i)++];
	str[j] = '\0';
}

void		get_strvalue(char *dict, int *i, char *str)
{
	int j;

	j = 0;
	while (dict[*i] != '\n')
		str[j++] = dict[(*i)++];
	(*i)++;
	str[j] = '\0';
}

t_list		*parse_dict(char *dict, int size_file)
{
	int			i;
	char		strkey[BUFF_SIZE];
	char		strvalue[BUFF_SIZE];
	t_list		*dict_list;

	dict_list = NULL;
	i = 0;
	while (i < size_file)
	{
		skip_spaces(dict, &i);
		get_strkey(dict, &i, strkey);
		while (dict[i] != ':')
			i++;
		i++;
		skip_spaces(dict, &i);
		get_strvalue(dict, &i, strvalue);
		ft_list_push_back(&dict_list, ft_atoi(strkey), strvalue);
	}
	free(dict);
	return (dict_list);
}
