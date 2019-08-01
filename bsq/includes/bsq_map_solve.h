/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_solve.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:36:08 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/30 15:54:54 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_MAP_SOLVE_H
# define BSQ_MAP_SOLVE_H

# include "bsq_map.h"

void	find_bsq_simple(int **sum_map, t_bsq_map *bsq_map);
void	find_bsq_full(int **sum_map, t_bsq_map *bsq_map);
void	find_bsq(int **sum_map, t_bsq_map *bsq_map);
void	paint_bsq_map(t_bsq_map *bsq_map, int **sum_map);

#endif
