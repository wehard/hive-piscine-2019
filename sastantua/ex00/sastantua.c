/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:29:15 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/14 21:51:20 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	offset_cursor(int i)
{
	int c;

	c = 0;
	while (c++ < i)
		ft_putchar(' ');
}

int		calc_base(int size)
{
	int floor;
	int width;
	int s;

	floor = 1;
	width = 1;
	s = 4;
	while (floor <= size)
	{
		width += 2 * (2 + floor);
		floor++;
		width += s;
		if (floor % 2 && floor < size)
			s += 2;
	}
	width -= s;
	return (width);
}

void	print_row(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
			ft_putchar('/');
		if (i == width - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void	gen_level(int size, int tier)
{
	int rows;
	int c_row;
	int offset;
	int width;

	rows = tier + 2;
	c_row = 0;
	width = tier == 1 ? 2 : calc_base(tier - 1) + 5;
	offset = ((calc_base(size) - calc_base(tier - 1) + 2) / 2) - 3;
	while (c_row < rows)
	{
		offset_cursor(offset);
		print_row(width);
		offset--;
		width += 2;
		ft_putchar('\n');
		c_row++;
	}
}

void	sastantua(int size)
{
	int cur_level;

	cur_level = 1;
	while (cur_level <= size)
	{
		gen_level(size, cur_level);
		cur_level++;
	}
}
