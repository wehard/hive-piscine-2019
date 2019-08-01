/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:32:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:25:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char str[] = "134875298325798375";
	char str2[] = "asdfs3jgkj3gfjkn34dsj4kngkljkgnnfg";
	printf("%s\n", str);
	printf("%d\n", ft_str_is_numeric(str));
	printf("%s\n", str2);
	printf("%d\n", ft_str_is_numeric(str2));
	return (0);
}
