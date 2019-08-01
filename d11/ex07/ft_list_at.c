/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:37:54 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 16:04:44 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int c;

	if (!begin_list)
		return (0);
	c = 0;
	while (begin_list)
	{
		if (c == nbr)
			return (begin_list);
		else if (c > nbr)
			return (0);
		begin_list = begin_list->next;
		c++;
	}
	return (0);
}
