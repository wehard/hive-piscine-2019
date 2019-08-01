/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:28:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/18 21:26:21 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_rot42(char *str);

int	main(void)
{
	char str[11] = "HelloWorld";
	printf("%s\n", str);
	printf("%s\n", ft_rot42(str));
}
