/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:39:28 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 21:11:05 by wkorande         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		c;
	char	*argtmp;

	if (argc < 1)
		return (0);
	c = 1;
	while (++c < argc)
	{
		if (ft_strcmp(argv[c], argv[c - 1]) < 0)
		{
			argtmp = argv[c];
			argv[c] = argv[c - 1];
			argv[c - 1] = argtmp;
			c = 1;
		}
	}
	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		ft_putchar('\n');
		c++;
	}
	return (0);
}
