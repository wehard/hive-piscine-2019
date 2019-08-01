/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:20:56 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 21:36:46 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	char *str;
	int i;
	int j;

	//str = "a\t\n\v\f\r +256";
	str = "++585487943895";
	i = ft_atoi(str);
	j = atoi(str);

	printf("My atoi: %d\n", i);
	printf("stdlib atoi: %d\n", j);
}
