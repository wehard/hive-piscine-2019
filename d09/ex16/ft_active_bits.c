/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:19:37 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/19 09:31:23 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int nbits;
	int i;

	nbits = 0;
	i = 0;
	while (i < 8)
	{
		if (value & (1 << i))
			nbits++;
	}
	return (nbits);
}
