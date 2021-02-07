/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:26:22 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/07 19:41:39 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "ft_list.h"

# define BUFF_SIZE	4096

int			calculate_size_dict(char *dict_name);
char		*read_dict(char *dict_name, int size_file);

t_list		*parse_dict(char *dict, int size_file);
void		itostr(int nbr, char *dict_name);

void		ft_putchar(char c);
void		ft_putstr(char *str);

int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);

int			ft_atoi(char *str);

int			ft_is_numeric(char c);
int			ft_is_space(char c);

#endif
