/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:35:13 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 11:56:56 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *cur_element;

	if (*begin_list)
	{
		cur_element = *begin_list;
		while (cur_element->next)
		{
			cur_element = cur_element->next;
		}
		cur_element->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
