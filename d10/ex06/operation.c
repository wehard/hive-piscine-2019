/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 18:20:53 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 19:15:05 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"
#include "math.h"

int	do_operation(int a, int b, int (*f)(int, int))
{
	return (f(a, b));
}

int	(*g_select_operation(char c))(int, int)
{
	if (c == '+')
		return (&add);
	else if (c == '-')
		return (&subtract);
	else if (c == '*')
		return (&multiply);
	else if (c == '/')
		return (&divide);
	else if (c == '%')
		return (&mod);
	else
		return (0);
}
