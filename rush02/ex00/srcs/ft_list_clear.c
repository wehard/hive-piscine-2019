/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:53:16 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 12:35:28 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem_erase;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		elem_erase = *begin_list;
		*begin_list = (*begin_list)->next;
		free(elem_erase);
	}
	*begin_list = (NULL);
}
