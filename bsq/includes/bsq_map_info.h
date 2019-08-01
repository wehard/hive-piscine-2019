/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_info.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 21:36:48 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 21:53:03 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_MAP_INFO_H
# define BSQ_MAP_INFO_H

typedef struct		s_bsq_map_info
{
	int				width;
	int				height;
	char			obstacle;
	char			empty;
	char			fill;
}					t_bsq_map_info;

t_bsq_map_info		*create_bsq_map_info(void);

#endif
