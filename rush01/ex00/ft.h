/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:21:54 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/21 19:38:25 by phakakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		check_spot(int **table, int y, int x, int input);
int		find_free(int **table, int *y, int *x);
int		is_free(int **table, int x, int y);
int		solve(int **table, int i, int y, int x);
int		solve_sudoku(int **table);
void	print_table(int **table);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	init_table(char **argv, int **table);
int		validate_table(int **table);
void	free_table(int **table);

#endif
