/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:07:36 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/21 14:08:26 by phakakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

void	print_table(int **table)
{
	int y;
	int x;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			ft_putnbr(table[y][x]);
			if (x < 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int		validate_table(int **table)
{
	int x;
	int y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (!check_spot(table, y, x, table[y][x]))
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

void	init_table(char **argv, int **table)
{
	int r;
	int c;
	int x;
	int y;

	r = 1;
	y = 0;
	while (argv[r])
	{
		c = 0;
		x = 0;
		table[y] = malloc(sizeof(int) * 9);
		while (argv[r][c])
		{
			if (argv[r][c] == '.')
				table[y][x] = 0;
			else
				table[y][x] = argv[r][c] - '0';
			c++;
			x++;
		}
		y++;
		r++;
	}
}

void	free_table(int **table)
{
	int y;

	y = 0;
	while (y < 9)
	{
		free(table[y]);
		y++;
	}
	free(table);
}
