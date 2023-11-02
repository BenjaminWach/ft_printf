/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:29:50 by bwach             #+#    #+#             */
/*   Updated: 2023/11/02 15:03:10 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static int	ft_ptr_len(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (!ptr)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

void	ft_putptr(unsigned long long num)
{
	if (num > 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	print_len += ft_putstr("0x");
	if (!print_len)
		return (ft_putchar('0'));
	else
	{
		ft_putptr(ptr);
		print_len += ft_ptrlen(ptr);
	}
	return (print_len);
}
