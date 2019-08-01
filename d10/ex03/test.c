/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:50:51 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 21:27:29 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_any(char **tab, int(*f)(char*));
void	ft_putnbr(int nb);

int	find_yes(char *str)
{
	if (strcmp(str, "yes") == 0)
		return (1);
	return (0);
}

int	main(void)
{
	char *tab[] = { "no", "yes", "no", "no", 0 };
	//char *tab[] = {0};
	int i;

	i = ft_any(tab, &find_yes);
	
	i ? printf("found") : printf("not found");
}
