/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:32:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:24:48 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str[] = "";
	char str2[] = "asdfsjgkjgfjkndsjkngkljkgnnfg";
	printf("%s\n", str);
	printf("%d\n", ft_str_is_alpha(str));
	printf("%s\n", str2);
	printf("%d\n", ft_str_is_alpha(str2));
	return (0);
}
