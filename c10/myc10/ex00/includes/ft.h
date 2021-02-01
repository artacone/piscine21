/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 17:58:17 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/02 00:25:36 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>

void		ft_display_file(char *file_name);
void		ft_putchar(char c);
void		ft_swap(int *a, int *b);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);

#endif
