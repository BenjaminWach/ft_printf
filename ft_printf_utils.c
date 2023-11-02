/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:51:12 by bwach             #+#    #+#             */
/*   Updated: 2023/11/02 14:52:33 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_printstr(char *str)
{
	if (!str)
		ft_putstr("(null)");
	else
		ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_print_percent(void)
{
	ft_putchar('%');
	return (1);
}
