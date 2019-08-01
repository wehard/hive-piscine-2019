/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:24:34 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 14:30:58 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

int	main()
{
	int a = 0;
	int b = 42;
	int *ptr_a = &a;
	int *ptr_b = &b;
	
	printf("a: %d ", *ptr_a);
	printf("b: %d\n", *ptr_b);
	ft_swap(ptr_a, ptr_b);
	printf("a: %d ", *ptr_a);
	printf("b: %d ", *ptr_b);
}
