/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_map.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:32:36 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 22:04:08 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUM_MAP_H
# define SUM_MAP_H

# include "../includes/bsq_map.h"

int		**create_sum_map(int w, int h);
void	init_sum_map(int **sum_map, t_bsq_map *bsq_map);
int		nbr_from_bsq_char(t_bsq_map *bsq_map, char c);
int		find_highest_nbr(int **sum_map, int *x, int *y,\
						t_bsq_map_info *bsq_map_info);
void	free_sum_map(int **map, int h);

#endif
