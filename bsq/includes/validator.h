/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:51:16 by mtuomine          #+#    #+#             */
/*   Updated: 2019/07/31 21:29:50 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATOR_H
# define VALIDATOR_H

typedef struct	s_vdata
{
	int			i;
	int			cur_row;
	int			row_width;
	int			empty_found;
	int			num_m_chars;
}				t_vdata;

int				get_header_rows(char *str, int end);
int				is_header_valid(t_bsq_map_info *header);
int				is_char_valid(char c, t_bsq_map_info *header);
int				is_width_same(int row_length, t_bsq_map_info *header);
int				is_map_valid(char *map, t_bsq_map_info *header, t_vdata *vdata);
t_vdata			*create_vdata(void);

#endif
