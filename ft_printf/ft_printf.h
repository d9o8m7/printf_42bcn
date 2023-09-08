/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:26:50 by daoliver          #+#    #+#             */
/*   Updated: 2023/09/08 15:11:38 by daoliver         ###   ########.fr       */
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

int	ft_char(char c, int *count);
void	ft_string(char *str, int *count);
void	ft_number(int number, int *count);
void	ft_pointer(unsigned long pointer, int *count);
void	ft_hexa(int n, int *count, char c);
void	ft_unsigned(unsigned int u, int *count);

#endif
