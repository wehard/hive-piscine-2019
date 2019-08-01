/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/24 21:07:34 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

void print_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s, ", (char*)list->data);
	printf("\n");
}

int	main(void)
{
	t_list *list = 0;

	ft_list_push_back(&list, "this is first data");
	print_list(list);
	ft_list_push_back(&list, "this is second data");
	print_list(list);
	ft_list_push_back(&list, "this is third data");
	print_list(list);
}
