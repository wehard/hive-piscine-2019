/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:33:27 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 15:36:34 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int c;

	if (argc > 1)
	{
		c = argc - 1;
		while (c > 0)
		{
			ft_putstr(argv[c]);
			ft_putchar('\n');
			c--;
		}
	}
	return (0);
}
