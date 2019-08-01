/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:34:52 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/24 21:53:26 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *temp;
	t_list *curr;

	if (!begin_list)
		begin_list = 0;
	curr = *begin_list;
	while (curr)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (curr == *begin_list)
				*begin_list = curr->next;
			else
				prev->next = curr->next;
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
