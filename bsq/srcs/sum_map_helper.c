/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_map_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:30:02 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:05:45 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_map_info.h"

int	find_highest_nbr(int **sum_map, int *x, int *y,\
					t_bsq_map_info *bsq_map_info)
{
	int cx;
	int cy;
	int highest;

	highest = -1;
	cy = 0;
	while (cy < bsq_map_info->height)
	{
		cx = 0;
		while (cx < bsq_map_info->width)
		{
			if (sum_map[cy][cx] > highest)
			{
				highest = sum_map[cy][cx];
				*x = cx;
				*y = cy;
			}
			cx++;
		}
		cy++;
	}
	return (highest);
}
