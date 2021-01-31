/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:47:34 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/31 20:57:43 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		grid_fill(int **grid);
int			grid_init(int **grid, char *clues);
void		print_error(); 

int			params_checker(int argc, char *argv[])
{
	int i;
	int len;
	int number_counter;

	i = 0;
	len = 0;
	number_counter = 0;
	if (argc - 1 == 1)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= '1' && argv[1][i] <= '4')
			{
				number_counter++;
				len++;
			}
			else if (argv[1][i] == ' ')
				len++;	
			else 
				return (0);
			i++;
		}
	return ((number_counter == 16 && len == 31) ? 1 : 0);
	}
}	

int			main(int argc, char *argv[])
{
	int grid[6][6];
	if (params_checker(argc, argv))
	{
		grid_fill(grid_init(grid, argv[1]));
	}
	else
	{
		print_error(); 
	}
	return (0);
}
