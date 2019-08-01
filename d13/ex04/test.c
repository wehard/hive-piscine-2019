/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:06:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/27 10:17:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_btree_all.h"

#define COUNT 10

void    infix_traversal(t_btree *node, int ws)
{
	if (node == NULL)
		return ;
	ws += COUNT;
	infix_traversal(node->right, ws);
	printf("\n");
	for (int i = COUNT; i < ws; i++)
		printf(" ");
	printf("%s\n", node->item);
	infix_traversal(node->left, ws);
}

void	print_item(char *item)
{
	printf("%s", item);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}


int		main(void)
{
	t_btree *root;
	root = NULL;
	
 	root = btree_create_node("2");
	root->left = btree_create_node("1");
	root->left->left = btree_create_node("0");
	root->left->right = btree_create_node("1");
	
	root->right = btree_create_node("3");
	root->right->right = btree_create_node("4");
	

	btree_insert_data(&root, "5", (int(*)(void *, void *))ft_strcmp);
	btree_insert_data(&root, "3", (int(*)(void *, void *))ft_strcmp);
	
	infix_traversal(root, ' ');
	
}
