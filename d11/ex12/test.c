/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 19:52:57 by wkorande         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_data(char *str)
{
	printf("%s", str);
}


int	main(/*int argc, char **argv*/)
{
	
	t_list *list = 0;
	//t_list *r;
	//t_list *e;

	ft_list_push_front(&list, "hello");
	ft_list_push_front(&list, "xxx");
	ft_list_push_front(&list, "hello");
	ft_list_push_front(&list, "hello");
	ft_list_push_front(&list, "world");
	//int (*cmp)(void *, void *))
	print_list(list);
	ft_list_remove_if(&list, "xxx", (int(*)(void *, void *))&ft_strcmp);
	print_list(list);
}
