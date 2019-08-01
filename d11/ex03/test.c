/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/24 21:16:47 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ft_list_all.h"

void print_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s, ", (char*)list->data);
	printf("\n");
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *element;

	element = ft_create_elem(data);
	if (element)
	{
		element->next = *begin_list;
		*begin_list = element;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

int	main(void)
{
	t_list *list = 0;
	int i;
	ft_list_push_front(&list, "this will be at end");
	print_list(list);
	ft_list_push_front(&list, "this will be middle");
	print_list(list);
	ft_list_push_front(&list, "this is first data");
	print_list(list);

	i = ft_list_size(list);
	printf("%i elements in list.", i);
}
