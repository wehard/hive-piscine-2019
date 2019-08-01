/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:03:26 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:11:14 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/bsq_map.h"
#include "../includes/bsq_map_solve.h"
#include "../includes/sum_map.h"

t_bsq_map	*create_bsq_map(t_bsq_map_info *map_info, char *map_str)
{
	t_bsq_map *bsq_map;

	bsq_map = (t_bsq_map*)malloc(sizeof(t_bsq_map));
	if (!bsq_map)
		return (NULL);
	bsq_map->map_info = map_info;
	bsq_map->map = create_map_from_string(map_info, map_str);
	return (bsq_map);
}

char		**create_map_from_string(t_bsq_map_info *map_info, char *map_str)
{
	int		i;
	char	**map;
	int		cur_y;

	map = init_bsq_map(map_info->height);
	if (!map)
		return (NULL);
	cur_y = 0;
	i = 0;
	while (cur_y < map_info->height)
	{
		map[cur_y] = &map_str[i];
		i += map_info->width + 1;
		cur_y++;
	}
	return (map);
}

char		**init_bsq_map(int h)
{
	char	**map;

	map = NULL;
	map = (char**)malloc(sizeof(char *) * h);
	if (!map)
		return (NULL);
	return (map);
}

void		process_and_display_bsq_map(t_bsq_map_info *map_info, char *map_str)
{
	t_bsq_map	*bsq_map;
	int			**sum_map;

	bsq_map = NULL;
	sum_map = NULL;
	bsq_map = create_bsq_map(map_info, map_str);
	sum_map = create_sum_map(bsq_map->map_info->width,\
							bsq_map->map_info->height);
	init_sum_map(sum_map, bsq_map);
	find_bsq(sum_map, bsq_map);
	paint_bsq_map(bsq_map, sum_map);
	print_bsq_map_fast(bsq_map);
	free_sum_map(sum_map, bsq_map->map_info->height);
	free(bsq_map->map);
	free(bsq_map);
	free(map_info);
	free(map_str);
}
