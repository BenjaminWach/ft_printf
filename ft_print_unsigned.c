/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:14:43 by bwach             #+#    #+#             */
/*   Updated: 2023/11/02 14:24:13 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static int	ft_unsigned_len(unsigned int nbr)
{
	int	len;

	len = 0;
	while (!nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

static char	*ft_small_itoa(unsigned int nbr)
{
	char	*num;
	int		len;

	len = ft_unsigned_len(nbr);
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	while (n)
	{
		num[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int nbr)
{
	int		print_len;
	char	*str;

	print_len = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	else
	{
		str = ft_small_itoa(nbr);
		print_len += ft_putstr(str);
		free(str);
	}
	return (print_len);
}
