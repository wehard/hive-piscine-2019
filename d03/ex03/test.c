/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:49:18 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 15:29:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_div_mod.c"

int	main()
{
	int div;
	int *pdiv = &div;
	int mod;
	int *pmod = &mod;
	ft_div_mod(42, 0, pdiv, pmod);
	printf("%d, %d", div, mod);
	return (0);
}
