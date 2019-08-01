/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:17:06 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 14:55:13 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);

int		main(void)
{
	char c = 'X';
	char *str = "string";
	char *cmp1 = "str1";
	char *cmp2 = "str2";
	char *lenstr = "fivex";
	int swap1 = 1;
	int swap2 = 9;

	int *sw1;
	int *sw2;

	sw1 = &swap1;
	sw2 = &swap2;

	ft_putchar(c);
	ft_putchar('\n');
	ft_putstr(str);
	ft_putchar('\n');
	printf("strcmp %s/%s: %d\n", cmp1, cmp2, ft_strcmp(cmp1, cmp2));
	printf("strlen %s: %d\n", lenstr, ft_strlen("fivex"));
	ft_swap(sw1, sw2);
	printf("ft_swap: %d/%d\n", *sw1, *sw2);
	return (0);
}
