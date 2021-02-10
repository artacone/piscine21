/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:24:49 by rvertie           #+#    #+#             */
/*   Updated: 2021/02/10 19:31:21 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# define _INTERNAL_STRINGIZE(x) #x
# define STR(x) _INTERNAL_STRINGIZE(x)
# define FT_CRIT(ERR_MSG) ft_crit(__FILE__, STR(__LINE__), __func__, ERR_MSG);

void			ft_print_error(const char *str);
void			ft_crit(const char *filename, const char *line,
						const char *function, char *err_msg);

#endif
