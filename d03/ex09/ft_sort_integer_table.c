/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:22:03 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/12 08:42:11 by wkorande         ###   ########.fr       */
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
