/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/24 21:01:19 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int	main(void)
{
	t_list *l;
	char *data = "this is in the list as data";
	l = ft_create_elem(data);

	if (l->next == NULL)
		printf("Next is null!\n");
	printf("Data is: %s\n", (char*)l->data);
}
