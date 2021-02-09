/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:20:26 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/09 22:44:07 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUFF_SIZE	4096
# define _INTERNAL_STRINGIZE(x) #x
# define STR(x) _INTERNAL_STRINGIZE(x)
# define FT_CRIT(ERR_MSG) ft_crit(__FILE__, STR(__LINE__), __func__, ERR_MSG);

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
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(const char *str);
int				ft_strcmp(char *s1, char *s2);

void			ft_print_error(const char *str);
void			ft_crit(const char *filename, const char *line,
						const char *function, char *err_msg);
void			print_map(t_map *map);

int				ft_atoi(char *str, int size);

int				ft_is_numeric(char c);
int				ft_is_space(char c);
int				ft_is_printable(char c);

int				ft_min_of_three(int first, int second, int third);

int				**build_bsq(t_map *map);
t_bsq			search_bsq(t_map *map);
void			draw_bsq(t_map *map, t_bsq bsq);

char			**init_char_matrix(t_pair size);
int				**init_int_matrix(t_pair size);
void			free_int_matrix(int **matrix, t_pair size);
void			free_char_matrix(char **matrix, t_pair size);

char			*ft_realloc(char *ptr, int old_size, int size);
int				ft_append_str(char **str, char c);
int				ft_getline(char **line_p, int *line_cap_p, int fd);

int				ft_read_stdin(t_map *output);
int				ft_read_filename(t_map *output, char *filename);
int				ft_read_filedesc(t_map *output, int fd);

#endif
