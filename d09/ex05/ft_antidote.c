/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:43:25 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/18 22:00:57 by wkorande         ###   ########.fr       */
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

int		ft_antidote(int i, int j, int k)
{
	int ints[3];

	ints[0] = i;
	ints[1] = j;
	ints[2] = k;
	ft_sort_integer_table(ints, 3);
	return (ints[1]);
}
