/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:51:34 by mtuomine          #+#    #+#             */
/*   Updated: 2019/07/31 23:04:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq_map_info.h"
#include "../includes/ft_str_functions.h"
#include "../includes/ft_nbr_functions.h"

int		get_header_rows(char *str, int end)
{
	char	temp[end];
	int		i;

	i = 0;
	while (i < end)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	ft_strncpy(temp, str, end);
	return (ft_atoi(temp));
}

int		is_char_valid(char c, t_bsq_map_info *header)
{
	if (!(c == header->empty || c == header->obstacle || c == '\n'))
		return (0);
	return (1);
}

int		is_width_same(int row_length, t_bsq_map_info *header)
{
	if (row_length != header->width)
		return (0);
	return (1);
}
