/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:45:10 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/13 23:37:13 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clear_table(int b[8][8], int size)
{
	int x;
	int y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			b[x][y] = 0;
			x++;
		}
		y++;
	}
}

int		is_ok(int b[8][8], int size, int x, int y)
{
	if (x < 0 || x > size - 1 || y < 0 || y > size - 1)
		return (0);
	if (x > 0 && b[x - 1][y] == 1)
		return (0);
	if ((x > 0 && y > 0) && b[x - 1][y - 1] == 1)
		return (0);
	if ((x > 0 && y < size - 1) && b[x - 1][y + 1] == 1)
		return (0);
	return (1);
}

int		solve(int t[8][8], int col, int row)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (is_ok(t, 8, col, i))
		{
			t[col][row] = 1;
			return (solve(t, col++, i));
		}
		else
		{
			clear_table(t, 8);
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_eight_queens_puzzle(void)
{
	int table[8][8] = {  0 };
	int p;
	int row;

	p = 0;
	row = 0;
	while (row < 9)
	{
		p += solve(table, 0, row);
	}
	return (p);
}
