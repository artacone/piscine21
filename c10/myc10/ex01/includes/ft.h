/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 17:58:17 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 00:20:11 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>

# define BUFF_SIZE	4096

extern char	*g_progname;
void		ft_display_stdin(void);
void		ft_display_file(char *file_name);
void		ft_print_error(char *str);
void		ft_formatted_error(int errn, char *str);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);

#endif
