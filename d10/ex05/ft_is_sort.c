/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:41:47 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 21:30:26 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int v;

	if (length == 0 || length == 1)
		return (1);
	i = 0;
	v = 0;
	while (i < length - 1)
	{
		v = (*f)(tab[i], tab[i + 1]);
		if (v > 0)
			return (0);
		i++;
	}
	return (1);
}
