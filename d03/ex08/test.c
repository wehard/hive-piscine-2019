/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:24:21 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/12 12:19:07 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_atoi.c"

int main()
{
	int i;
	char str[] = "2147483648";
	printf("String: %s\n", str);
	i = ft_atoi(str);
	printf("Number: %d\n", i);
	return(0);
}
