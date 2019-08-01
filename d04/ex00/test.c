
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:53:07 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/12 21:34:26 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_iterative_factorial.c"

int	main()
{
	int a;
	
	a = ft_iterative_factorial(12);
	printf("result: %d", a);
	return (0);
}
