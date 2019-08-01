/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:02:00 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/17 10:46:44 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int *arr;

	int min = 0;
	int max = 5;
	int a = ft_ultimate_range(&arr, min, max);

	int c = max - min;
	int i = 0;
	while (i < c)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n%d", a);
	
	return (0);
}
