/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 12:24:44 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void print_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s, ", (char*)list->data);
	printf("\n");
}

int	main(void)
{
	t_list *list = 0;

	ft_list_push_front(&list, "this will be at end");
	print_list(list);
	ft_list_push_front(&list, "this will be middle");
	print_list(list);
	ft_list_push_front(&list, "this is first data");
	print_list(list);
}
