/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:44:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:09:03 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_list.h"
#include "../includes/bsq_map.h"
#include "../includes/ft_str_functions.h"
#include "../includes/validator.h"

char			*get_map_str_from_file_content(t_list *fcont_list,\
				int *l_size, unsigned int *map_bytes)
{
	int		i;
	char	*map_str;
	char	*cur_data;
	int		d_index;

	map_str = NULL;
	map_str = (char*)malloc((sizeof(char) * *map_bytes) + 1);
	if (!map_str)
		return (NULL);
	*map_str = '\0';
	i = -1;
	d_index = 0;
	while (++i < *l_size)
	{
		cur_data = ft_list_at(fcont_list, i)->data;
		if (i == 0)
		{
			while (*cur_data != '\n')
				cur_data++;
			cur_data++;
		}
		ft_strcat(map_str, cur_data, d_index);
		d_index += ft_strlen(cur_data);
	}
	return (map_str);
}

t_bsq_map_info	*parse_file_header(t_list *fcont_list)
{
	t_bsq_map_info	*bsq_map_info;
	char			*str;
	int				i;

	bsq_map_info = NULL;
	str = NULL;
	if (!fcont_list || fcont_list->data == NULL)
		return (NULL);
	str = fcont_list->data;
	if (str && str[0] == '\n')
		return (NULL);
	bsq_map_info = create_bsq_map_info();
	i = 0;
	while (str[i] != '\n')
		i++;
	bsq_map_info->fill = str[--i];
	bsq_map_info->obstacle = str[--i];
	bsq_map_info->empty = str[--i];
	bsq_map_info->height = get_header_rows(str, i);
	return (bsq_map_info);
}
