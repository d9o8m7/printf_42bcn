/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:26:50 by daoliver          #+#    #+#             */
/*   Updated: 2023/09/04 21:31:53 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/*PROTOTIPO*/

int	ft_printf(const char *str, ...);

/*FUNCIONES*/

int		print_char(char c, int *count);
void	print_string(char *str, int *count);
void	print_number(int number, int *count);
void	print_pointer(unsigned long pointer, int *count);
void	print_hexa(int n, int *count, char c);
void	print_unsigned(unsigned int u, int *count);

#endif
