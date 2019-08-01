/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 08:56:13 by mtuomine          #+#    #+#             */
/*   Updated: 2019/07/31 23:03:56 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/bsq_map_info.h"
#include "../includes/validator.h"

t_vdata	*create_vdata(void)
{
	t_vdata *vdata;

	vdata = (t_vdata*)malloc(sizeof(t_vdata));
	if (vdata == NULL)
		return (NULL);
	vdata->i = 0;
	vdata->cur_row = 0;
	vdata->row_width = 0;
	vdata->empty_found = 0;
	vdata->num_m_chars = 0;
	return (vdata);
}

int		is_header_valid(t_bsq_map_info *header)
{
	if (header->height <= 0)
		return (0);
	if (!header->obstacle || !header->fill || !header->empty)
		return (0);
	if (header->obstacle == header->empty)
		return (0);
	return (1);
}

int		is_map_valid(char *map, t_bsq_map_info *header, t_vdata *vdata)
{
	vdata->num_m_chars = (header->width + 1) * header->height;
	while (vdata->i < vdata->num_m_chars)
	{
		if (!is_char_valid(map[vdata->i], header))
			return (0);
		if (map[vdata->i] == header->empty)
			vdata->empty_found = 1;
		if (map[vdata->i] == '\n')
		{
			vdata->cur_row++;
			if (!is_width_same(vdata->row_width, header))
				return (0);
			vdata->row_width = 0;
			vdata->i++;
			continue ;
		}
		vdata->row_width++;
		vdata->i++;
	}
	if (!vdata->empty_found || vdata->cur_row < header->height\
		|| vdata->i < vdata->num_m_chars)
		return (0);
	return (1);
}
