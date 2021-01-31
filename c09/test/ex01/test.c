/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 13:40:13 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/31 13:56:38 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);
void		ft_swap(int *a, int *b);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);

int			main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (-1);
	}
	ft_putstr(argv[1]);
	ft_putchar('\t');
	ft_putchar(ft_strlen(argv[1]) + '0');
	ft_putchar('\n');
	ft_putstr(argv[2]);
	ft_putchar('\t');
	ft_putchar(ft_strlen(argv[2]) + '0');
	ft_putchar('\n');
	ft_putchar(ft_strcmp(argv[2], argv[1]) + '0');
	ft_putchar('\n');
	return (0);
}
