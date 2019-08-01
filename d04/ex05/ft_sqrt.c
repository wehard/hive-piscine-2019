/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 21:51:08 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/12 22:15:30 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int c;

	if (nb <= 0)
		return (0);
	i = 0;
	c = 1;
	while (i < nb)
	{
		i = c * c;
		if (i == nb)
			return (c);
		if (i > nb)
			return (0);
		c++;
	}
	return (0);
}
