/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:08:53 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/21 19:41:29 by phakakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	find_free(int **table, int *y, int *x)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (is_free(table, j, i))
			{
				*y = i;
				*x = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	is_free(int **table, int x, int y)
{
	return (table[y][x] == 0);
}

int	solve(int **table, int i, int y, int x)
{
	int rtn;

	rtn = 0;
	if (!find_free(table, &y, &x))
		return (1);
	while (i <= 9)
	{
		if (check_spot(table, y, x, i))
		{
			table[y][x] = i;
			rtn = solve(table, 1, y, x);
			table[y][x] = 0;
			return (rtn + solve(table, i + 1, y, x));
		}
		i++;
	}
	return (0);
}

int	solve_sudoku(int **table)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 1;
	if (!find_free(table, &y, &x))
		return (1);
	while (i <= 9)
	{
		if (check_spot(table, y, x, i))
		{
			table[y][x] = i;
			if (solve_sudoku(table))
				return (1);
			else
				table[y][x] = 0;
		}
		i++;
	}
	return (0);
}
