/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:30:25 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:05:05 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/sum_map.h"
#include "../includes/bsq_map.h"

int		**create_sum_map(int w, int h)
{
	int **sum_map;
	int c_y;

	sum_map = NULL;
	sum_map = (int**)malloc(sizeof(int *) * h);
	if (!sum_map)
		return (NULL);
	c_y = 0;
	while (c_y < h)
	{
		sum_map[c_y] = (int*)malloc(sizeof(int) * w);
		if (!sum_map[c_y])
			return (NULL);
		c_y++;
	}
	return (sum_map);
}

void	init_sum_map(int **sum_map, t_bsq_map *bsq_map)
{
	int x;
	int y;

	if (!sum_map || !bsq_map)
		return ;
	y = 0;
	while (y < bsq_map->map_info->height)
	{
		x = 0;
		while (x < bsq_map->map_info->width)
		{
			sum_map[y][x] = nbr_from_bsq_char(bsq_map, bsq_map->map[y][x]);
			x++;
		}
		y++;
	}
}

int		nbr_from_bsq_char(t_bsq_map *bsq_map, char c)
{
	if (c == bsq_map->map_info->obstacle)
		return (0);
	if (c == bsq_map->map_info->empty)
		return (1);
	return (-1);
}

void	free_sum_map(int **sum_map, int h)
{
	int i;

	i = 0;
	while (i < h)
	{
		free(sum_map[i]);
		i++;
	}
	free(sum_map);
}
