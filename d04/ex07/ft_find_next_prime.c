/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 09:23:52 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/13 19:33:27 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int c;

	if (nb <= 1)
		return (0);
	if (nb == 4)
		return (0);
	c = 2;
	while (c < (nb / 2) + 1)
	{
		if (nb % c == 0)
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
