/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:38:23 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 19:47:29 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct	s_pair
{
	int x;
	int y;
}				t_pair;

typedef struct	s_bsq
{
	int x;
	int y;
	int size;
}				t_bsq;

typedef struct	s_map
{
	int		**int_map;
	char	**char_map;
	t_pair	size;
	char	empty;
	char	obstacle;
	char	full;
}				t_map;

void			clear_map(t_map *map);
void			print_map(t_map *map);

int				**build_bsq(t_map *map);
t_bsq			search_bsq(t_map *map);
void			draw_bsq(t_map *map, t_bsq bsq);

char			**init_char_matrix(t_pair size);
int				**init_int_matrix(t_pair size);
void			free_int_matrix(int **matrix, t_pair size);
void			free_char_matrix(char **matrix, t_pair size);

int				ft_read_stdin(t_map *output);
int				ft_read_filename(t_map *output, char *filename);
int				ft_read_filedesc(t_map *output, int fd);

#endif
