/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:45:46 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 16:48:12 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div_result;
	int div_remainder;

	div_result = *a / *b;
	div_remainder = *a % *b;
	*a = div_result;
	*b = div_remainder;
}
