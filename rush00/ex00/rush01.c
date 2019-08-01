/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:17:17 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/14 16:17:37 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	getchar(int cur_x, int cur_y, int w, int h)
{
	char *c;

	c = "/*\\*";
	if (cur_y == 0)
	{
		if (cur_x == 0)
			return (c[0]);
		else if (cur_x == w - 1)
			return (c[2]);
		else
			return (c[1]);
	}
	else if (cur_y == h - 1)
	{
		if (cur_x == 0)
			return (c[2]);
		else if (cur_x == w - 1)
			return (c[0]);
		else
			return (c[1]);
	}
	else
		return (c[3]);
}

void	rush(int x, int y)
{
	int		cur_x;
	int		cur_y;
	char	c;

	if (x <= 0 || y <= 0)
		return ;
	c = ' ';
	cur_y = 0;
	while (cur_y < y)
	{
		cur_x = 0;
		while (cur_x < x)
		{
			c = getchar(cur_x, cur_y, x, y);
			if (cur_y == 0 || cur_y == y - 1)
				ft_putchar(c);
			else if (cur_x == 0 || cur_x == x - 1)
				ft_putchar(c);
			else
				ft_putchar(' ');
			cur_x++;
		}
		ft_putchar('\n');
		cur_y++;
	}
}
