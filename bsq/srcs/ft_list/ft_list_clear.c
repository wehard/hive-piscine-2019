/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:53:16 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:14:55 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../includes/ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem_erase;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		elem_erase = *begin_list;
		*begin_list = (*begin_list)->next;
		free(elem_erase->data);
		free(elem_erase);
	}
	*begin_list = (NULL);
}
