/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dimensions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoponen <ottkopo@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 19:56:29 by okoponen          #+#    #+#             */
/*   Updated: 2019/07/28 14:34:29 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_x(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i] != '\n')
	{
		x++;
		i++;
	}
	return (x);
}

int		ft_check_y(char *str)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			y++;
		}
		i++;
	}
	return (y);
}
