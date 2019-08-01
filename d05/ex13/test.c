/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:34:43 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:40:28 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char empty[] = "";
	char str[] = "AAasdsdsdAAsdsd";
	char str2[] = "fasffdffjkkljkjfjfkjdjlaksjfkkf";

	printf("%s\n", "Empty");
	printf("%d\n", ft_str_is_lowercase(empty));
	printf("%s\n", str);
	printf("%d\n", ft_str_is_lowercase(str));
	printf("%s\n", str2);
	printf("%d\n", ft_str_is_lowercase(str2));

	return (0);
}
