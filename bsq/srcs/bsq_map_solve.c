/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:34:16 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:11:51 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_map.h"
#include "../includes/sum_map.h"
#include "../includes/ft_nbr_functions.h"

void	find_bsq_simple(int **sum_map, t_bsq_map *bsq_map)
{
	int x;

	x = 0;
	while (x < bsq_map->map_info->width)
	{
		sum_map[0][x] = nbr_from_bsq_char(bsq_map, bsq_map->map[0][x]);
		x++;
	}
}

void	find_bsq_full(int **sum_map, t_bsq_map *bsq_map)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (y < bsq_map->map_info->height)
	{
		x = 1;
		while (x < bsq_map->map_info->width)
		{
			if (bsq_map->map[y][x] == bsq_map->map_info->empty)
				sum_map[y][x] = min(sum_map[y][x - 1], sum_map[y - 1][x],\
				sum_map[y - 1][x - 1]) + 1;
			else if (bsq_map->map[y][x] == bsq_map->map_info->obstacle)
				sum_map[y][x] =\
				nbr_from_bsq_char(bsq_map, bsq_map->map_info->obstacle);
			x++;
		}
		y++;
	}
}

void	find_bsq(int **sum_map, t_bsq_map *bsq_map)
{
	if (bsq_map->map_info->height == 1)
		find_bsq_simple(sum_map, bsq_map);
	else
		find_bsq_full(sum_map, bsq_map);
}

void	paint_bsq_map(t_bsq_map *bsq_map, int **sum_map)
{
	int h_x;
	int h_y;
	int c_x;
	int c_y;
	int h;

	h_x = 0;
	h_y = 0;
	c_x = 0;
	c_y = 0;
	h = find_highest_nbr(sum_map, &h_x, &h_y, bsq_map->map_info);
	c_y = h_y;
	while (c_y > h_y - h)
	{
		c_x = h_x;
		while (c_x > h_x - h)
		{
			bsq_map->map[c_y][c_x] = bsq_map->map_info->fill;
			c_x--;
		}
		c_y--;
	}
}
