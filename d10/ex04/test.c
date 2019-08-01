/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:50:51 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 14:24:53 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_count_if(char **tab, int(*f)(char*));

int	find_yes(char *str)
{
	if (strcmp(str, "yes") == 0)
		return (1);
	return (0);
}

int	main(void)
{
	char *tab[] = { "yes", "no", "no", "yes", 0 };
	int i;

	i = ft_count_if(tab, &find_yes);
	
	printf("Found: %i", i);
}
