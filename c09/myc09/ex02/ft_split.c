/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgarlic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:40:06 by jgarlic           #+#    #+#             */
/*   Updated: 2021/02/01 19:34:11 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		checker(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		counter(char *str, char *charset)
{
	int i;
	int k;
	int b;

	i = 0;
	k = 0;
	b = 1;
	while (str[i] != '\0')
	{
		if (checker(str[i], charset) == 0)
		{
			if (b == 1)
			{
				b = 0;
				k++;
			}
		}
		else
			b = 1;
		i++;
	}
	return (k);
}

int		filler2(char **x, char *str, int *k, int *j)
{
	int j2;

	x[*j] = malloc(sizeof(char) * (*k + 1));
	if (x[*j] != 0)
	{
		j2 = 0;
		while (*k > 0)
		{
			x[*j][j2] = *(str - *k);
			j2++;
			*k = *k - 1;
		}
		x[*j][j2] = '\0';
		*j = *j + 1;
		return (1);
	}
	else
		return (0);
}

int		filler(char **x, char *str, char *charset)
{
	int i;
	int k;
	int j;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (checker(str[i], charset) == 0)
			k++;
		else
		{
			if (k != 0)
			{
				if (filler2(x, str + i, &k, &j) == 0)
					break ;
			}
		}
		i++;
	}
	if (k != 0)
		filler2(x, str + i, &k, &j);
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		j;
	char	**x;

	x = malloc(sizeof(&x) * (counter(str, charset) + 1));
	if (x != 0)
	{
		j = filler(x, str, charset);
		x[j] = malloc(sizeof(char));
		if (x[j] != 0)
			x[j] = 0;
	}
	return (x);
}
