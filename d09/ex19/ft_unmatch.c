/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:54:41 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/19 12:08:11 by wkorande         ###   ########.fr       */
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

int		ft_unmatch(int *tab, int length)
{
	int c;

	ft_sort_integer_table(tab, length);
	c = 0;
	while (tab[c + 1])
	{
		if (tab[c] != tab[c + 1])
			return (c);
		c += 2;
	}
	return (tab[c]);
}
