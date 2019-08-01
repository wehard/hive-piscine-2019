/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 21:38:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/12 21:42:31 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_factorial.c"

int	main(void)
{
	int f = 0;

	f = ft_recursive_factorial(12);
	printf("%d", f);
	return (0);
}
