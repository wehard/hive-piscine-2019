/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/25 10:08:40 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_btree_all.h"

int	main(void)
{
	t_btree *n;
	char *data = "this is data in item";
	n = btree_create_node(data);

	if (n->left == NULL && n->right == NULL )
		printf("Left and right are null! Good!\n");
	printf("Data in node: %s\n", (char*)n->item);
}
