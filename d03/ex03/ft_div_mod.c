/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:38:51 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 15:41:24 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int div_result;
	int div_remainder;

	if (a == 0 || b == 0)
	{
		return ;
	}
	div_result = a / b;
	div_remainder = a % b;
	*div = div_result;
	*mod = div_remainder;
}
