/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:20:26 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 19:46:53 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(const char *str);
int				ft_strcmp(char *s1, char *s2);

int				ft_atoi(char *str, int size);

int				ft_is_numeric(char c);
int				ft_is_space(char c);
int				ft_is_printable(char c);

int				ft_min_of_three(int first, int second, int third);

char			*ft_realloc(char *ptr, int old_size, int size);
int				ft_append_str(char **str, char c);
int				ft_getline(char **line_p, int *line_cap_p, int fd);

#endif
