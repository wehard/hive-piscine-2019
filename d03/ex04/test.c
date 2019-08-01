/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:51:30 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 16:46:40 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int	main()
{
	int i = 42;
	int j = 10;
	int *a;
	int *b;

	a = &i;
	b = &j;

	ft_ultimate_div_mod(a, b);
	printf("%d", *a);
	printf("%d", *b);
}
