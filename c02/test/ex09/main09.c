/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 21:10:27 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/23 21:18:04 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf
		("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n%s\n",
		 ft_strcapitalize(str));
	return (0);
}
