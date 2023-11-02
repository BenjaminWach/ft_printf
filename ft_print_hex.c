/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:03:19 by bwach             #+#    #+#             */
/*   Updated: 2023/11/02 14:26:19 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static int	ft_hex_len(unsigned int nbr, const char conversion)
{
	int	len;

	len = 0;
	while (!nbr)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

static void	ft_put_hex(unsigned int nbr, const char conversion)
{
	if (nbr > 16)
	{
		ft_put_hex(nbr / 16, conversion);
		ft_put_hex(nbr % 16, conversion);
	}
	else
	{
		if (nbr < 10)
			ft_putchar_fd(nbr + '0', 1);
		else
		{
			if (conversion == 'x')
				ft_putchar_fd(nbr - 10 + 'a', 1);
			else
				ft_putchar_fd(nbr - 10 + 'A', 1);
		}
	}
}

int	ft_print_hex(unsigned int nbr, const char conversion)
{
	if (nbr == 0)
		return (ft_putchar('0'));
	else
		ft_put_hex(nbr, conversion);
	return (ft_hexlen(nbr));
}
