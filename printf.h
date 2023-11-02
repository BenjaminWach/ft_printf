/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:32:06 by bwach             #+#    #+#             */
/*   Updated: 2023/11/02 14:27:39 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_print_hex(unsigned int nbr);
int		ft_print_percent(void);
int		ft_print_unsigned(unsigned int nbr);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_print_percent(void);

#endif