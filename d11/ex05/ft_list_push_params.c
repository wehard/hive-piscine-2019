/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:06:13 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/24 21:34:53 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*temp;
	t_list	*list;

	if (ac <= 0)
		return (NULL);
	list = NULL;
	i = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = list;
		list = temp;
		i++;
	}
	return (list);
}
