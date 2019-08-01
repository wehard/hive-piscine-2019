/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:36:13 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 20:56:44 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

typedef int			(*t_s_opp)(int, int);

typedef struct		s_opp
{
	char			*op;
	t_s_opp			func;
}					t_opp;

void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
int					ft_atoi(char *str);
int					ft_usage(int a, int b);

#endif
