/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:28:38 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 12:22:49 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int c;

	c = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		c++;
	}
	return (c);
}
