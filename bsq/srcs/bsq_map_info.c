/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 21:30:03 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 12:42:19 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/bsq_map_info.h"

t_bsq_map_info	*create_bsq_map_info(void)
{
	t_bsq_map_info *map_info;

	map_info = malloc(sizeof(t_bsq_map_info));
	if (!map_info)
		return (NULL);
	return (map_info);
}
