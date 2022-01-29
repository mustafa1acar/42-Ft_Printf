/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:03:41 by macar             #+#    #+#             */
/*   Updated: 2022/01/28 13:00:00 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int *s)
{
	if (n == -2147483648)
	{
		*s += ft_putchar_fd('-');
		*s += ft_putchar_fd('2');
		n = 147483648;
	}
	if (n < 0)
	{
		*s += ft_putchar_fd('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		*s += ft_putchar_fd(n + 48);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, s);
		ft_putnbr_fd(n % 10, s);
	}
	return (*s);
}
