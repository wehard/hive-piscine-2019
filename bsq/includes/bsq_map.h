/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:04:03 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 21:51:31 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_MAP_H
# define BSQ_MAP_H
# include "bsq_map_info.h"

typedef struct				s_bsq_map
{
	struct s_bsq_map_info	*map_info;
	char					**map;
}							t_bsq_map;

t_bsq_map					*create_bsq_map(t_bsq_map_info *map_info,\
							char *map_str);
char						**create_map_from_string(t_bsq_map_info *map_info,\
							char *map_str);
char						**init_bsq_map(int h);
void						process_and_display_bsq_map(\
							t_bsq_map_info *map_info, char *map_str);
int							calculate_width(char *map_str);
void						print_bsq_map_fast(t_bsq_map *bsq_map);

#endif
