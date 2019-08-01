/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:44:08 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/18 18:39:22 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int h;
	int am;

	am = 1;
	h = hour;
	if (h > 11 && h != 24)
	{
		am = 0;
	}
	if (h == 0)
		h = 12;
	if (h == 24)
		h = 0;
	if (hour < 12 && am)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
		h, h + 1);
	else if (hour >= 12 && !am)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
		h, h + 1);
}
