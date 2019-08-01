/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:15:17 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 18:16:27 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	add(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	divide(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	return (a / b);
}

int	mod(int a, int b)
{
	return (a % b);
}
