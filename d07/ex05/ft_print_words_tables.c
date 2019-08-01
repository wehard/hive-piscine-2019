/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:55:27 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/18 15:00:14 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int w;
	int c;

	w = 0;
	while (tab[w])
	{
		c = 0;
		while (tab[w][c])
		{
			ft_putchar(tab[w][c]);
			c++;
		}
		ft_putchar('\n');
		w++;
	}
}
