/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:34:43 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 23:01:37 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char empty[] = "";
	char str[] = "\x01\x05\x0a\fddfs\x7f\x15";
	char str2[] = "hello fasffdffjkkljkjfjfkjdjlaksjfkkf";

	printf("%s\n", "Empty");
	printf("%d\n", ft_str_is_printable(empty));
	printf("%s\n", str);
	printf("%d\n", ft_str_is_printable(str));
	printf("%s\n", str2);
	printf("%d\n", ft_str_is_printable(str2));

	return (0);
}
