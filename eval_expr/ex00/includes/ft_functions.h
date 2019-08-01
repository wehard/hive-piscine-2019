/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:20:12 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 19:17:50 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi_dp(char **strptr);
int		parse_deep(char **xpr);
int		parse_add_sub(char **xpr);
int		parse_mul_div_mod(char **xpr);

#endif
