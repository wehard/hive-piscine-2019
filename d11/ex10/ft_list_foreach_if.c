/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:22:40 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 18:06:45 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)(void *, void *))
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
		{
			(*f)(begin_list->data);
		}
		begin_list = begin_list->next;
	}
}
