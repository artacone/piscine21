/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 17:58:17 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 18:47:07 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int			ft_sum(int lvalue, int rvalue);
int			ft_sub(int lvalue, int rvalue);
int			ft_div(int lvalue, int rvalue);
int			ft_mul(int lvalue, int rvalue);
int			ft_mod(int lvalue, int rvalue);

int			op_check(char op, int rvalue);
void		do_op(int lvalue, char op, int rvalue);

int			ft_atoi(char *str);
void		ft_putnbr(int nb);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strcmp(char *s1, char *s2);

#endif
