/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:30:10 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/12 08:41:37 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_sort_integer_table.c"

int	main()
{
	int tab[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int tab_length = 10;
 
	for (int i = 0; i < tab_length; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");

	ft_sort_integer_table(tab, tab_length);

	for (int j = 0; j < tab_length; j++)
	{
		printf("%d, ", tab[j]);
	}
	return (0);
}
