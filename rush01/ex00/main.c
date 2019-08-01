/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:07:36 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/21 19:38:40 by phakakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

int	calculate_nbr(int **table)
{
	int y;
	int x;
	int rtn;

	y = 0;
	rtn = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (table[y][x] >= 1 && table[y][x] <= 9)
				rtn++;
			x++;
		}
		y++;
	}
	return (rtn);
}

int	validate_args(int argc, char **argv)
{
	int r;
	int	c;

	if (argc != 10)
		return (0);
	r = 1;
	while (argv[r])
	{
		c = 0;
		while (argv[r][c])
		{
			if (argv[r][c] != '.')
			{
				if (!(argv[r][c] >= '1' && argv[r][c] <= '9'))
					return (0);
			}
			c++;
		}
		if (c != 9)
			return (0);
		r++;
	}
	return (1);
}

int	check_solutions(int **table)
{
	int rtn;

	rtn = 0;
	rtn += solve(table, 1, 0, 0);
	if (rtn == 1)
		solve_sudoku(table);
	return (rtn);
}

int	main(int argc, char **argv)
{
	int **table;
	int solutions;

	if (!validate_args(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	table = malloc(sizeof(int *) * 9);
	init_table(argv, table);
	if (!validate_table(table) || calculate_nbr(table) < 16)
	{
		ft_putstr("Error\n");
		return (0);
	}
	solutions = check_solutions(table);
	if (solutions == 1)
		print_table(table);
	else
		ft_putstr("Error\n");
	free_table(table);
	return (0);
}
