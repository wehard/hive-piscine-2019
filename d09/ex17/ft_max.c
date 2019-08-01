/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:46:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/19 09:55:06 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int tmp;
	int c;

	c = 0;
	while (++c < size)
	{
		if (tab[c] < tab[c - 1])
		{
			tmp = tab[c - 1];
			tab[c - 1] = tab[c];
			tab[c] = tmp;
			c = 0;
		}
	}
}

int		ft_max(int *tab, int length)
{
	ft_sort_integer_table(tab, length);
	return (tab[length - 1]);
}
