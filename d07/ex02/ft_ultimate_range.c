/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:32:32 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/17 10:46:00 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;
	int count;

	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	count = (max - min);
	arr = malloc(sizeof(int) * count);
	i = 0;
	while (i < count)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (count);
}
