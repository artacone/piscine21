/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:11:45 by rvertie           #+#    #+#             */
/*   Updated: 2021/03/13 18:09:15 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h" 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_print_address(char *addr, char *hex_base)
{
	char			stack[64];
	unsigned int	i;
	unsigned long	num_addr;

	i = 0;
	num_addr = (unsigned long) addr;
	while (num_addr)
	{
		stack[i] = hex_base[num_addr % 16];
		num_addr /= 16;
		i++;
	}
	write(1, "00000001", 8);
	while (i)
	{
		ft_putchar(stack[--i]);
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_print_hex(unsigned int i, unsigned int size,
					char *p, char *hex_base)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		ft_putchar(hex_base[*(p + i + j) / 16]);
		ft_putchar(hex_base[*(p + i + j) % 16]);
		if (j % 2)
		{
			ft_putchar(' ');
		}
		j++;
	}
	while (j < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
		{
			ft_putchar(' ');
		}
		j++;
	}
}

void	ft_print_char(int i, unsigned int size, char *p)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		if (*(p + i + j) >= 32 && *(p + i + j) <= 126)
		{
			ft_putchar(*(p + i + j));
		}
		else
		{
			ft_putchar('.');
		}
		j++;
	}
}

void	ft_hexdump(char *file_name)
{
	unsigned int	i;
	char			*p;
	char			*hex_base;

	if (ft_strcmp(file_name, "stdin") == 0)
	{
		fd = 0;
	}
	else if ((fd = open(file_name, O_RDONLY)) == -1)
	{
		ft_formatted_error(errno, file_name);
		return ;
	}
	while ((size_read = read(fd,)))
	i = 0;
	p = (char *)addr;
	hex_base = "0123456789abcdef";
	while (i < size)
	{
		ft_print_address(p + i, hex_base);
		ft_print_hex(i, size, p, hex_base);
		ft_print_char(i, size, p);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
