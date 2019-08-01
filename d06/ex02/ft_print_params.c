/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:28:12 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 15:31:33 by wkorande         ###   ########.fr       */
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
		c = 1;
		while (c < argc)
		{
			ft_putstr(argv[c]);
			ft_putchar('\n');
			c++;
		}
	}
	return (0);
}
