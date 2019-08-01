/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:23:59 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:12:36 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/bsq_map.h"

int		calculate_width(char *map_str)
{
	int i;

	i = 0;
	while (map_str[i] != '\n' && map_str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	print_bsq_map_fast(t_bsq_map *bsq_map)
{
	int c_y;

	c_y = 0;
	while (c_y < bsq_map->map_info->height)
	{
		write(1, bsq_map->map[c_y], bsq_map->map_info->width);
		write(1, "\n", 1);
		c_y++;
	}
}
