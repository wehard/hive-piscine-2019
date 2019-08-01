/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:21:00 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 11:37:04 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"
#include <stdio.h>

int	main(void)
{
	ft_putchar('C');
	ft_putchar('\n');
	ft_putstr("String");
	ft_putchar('\n');
	printf("%i\n", ft_strcmp("42", "42"));
	char *str = "fiver";
	printf("%s : %i\n", str, ft_strlen(str));
}
