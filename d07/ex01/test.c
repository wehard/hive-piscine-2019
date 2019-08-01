/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:02:00 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/18 12:37:02 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *arr;

	int min = 2147483647;
	int max = -1292;
	arr = ft_range(min, max);

	
	if(!arr)
	{
		return (1);
	}
	
	int c = max - min;
	int i = 0;
	while (i < c)
	{
		printf("%d, ", arr[i]);
		i++;
	}

	return (0);
}
