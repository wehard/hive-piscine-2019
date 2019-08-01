/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:11:21 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/13 21:12:35 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_eight_queens_puzzle.c"

int	main(void)
{
	int i;
	i = ft_eight_queens_puzzle();
	printf("Possibilities: %d", i);
	return (0);
}
