/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:01:12 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 11:18:32 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char chars[3];

	chars[0] = '0';
	while (chars[0] <= '7')
	{
		chars[1] = chars[0] + 1;
		while (chars[1] <= '8')
		{
			chars[2] = chars[1] + 1;
			while (chars[2] <= '9')
			{
				ft_putchar(chars[0]);
				ft_putchar(chars[1]);
				ft_putchar(chars[2]);
				if (chars[0] < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				chars[2]++;
			}
			chars[1]++;
		}
		chars[0]++;
	}
}
