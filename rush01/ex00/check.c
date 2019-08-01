/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phakakos <phakakos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 23:17:18 by phakakos          #+#    #+#             */
/*   Updated: 2019/07/21 14:05:58 by phakakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int **table, int y, int x, int input)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (table[y][i] == input && i != x && input > 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_column(int **table, int y, int x, int input)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (table[i][x] == input && i != y && input > 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_box(int **table, int y, int x, int input)
{
	int xi;
	int yi;

	xi = x / 3 * 3;
	yi = y / 3 * 3;
	while (yi < y / 3 * 3 + 3)
	{
		while (xi < x / 3 * 3 + 3)
		{
			if (table[yi][xi] == input && xi != x && yi != y && input > 0)
				return (0);
			xi++;
		}
		xi = x / 3 * 3;
		yi++;
	}
	return (1);
}

int	check_spot(int **table, int y, int x, int input)
{
	return (check_row(table, y, x, input) &&\
			check_column(table, y, x, input) &&\
			check_box(table, y, x, input));
}
