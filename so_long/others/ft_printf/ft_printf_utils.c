/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:35:42 by ftumay            #+#    #+#             */
/*   Updated: 2022/08/18 19:45:10 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	array_print(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (!str)
		return (array_print("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		len++;
	}
	return (len);
}

int	nbr_print(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n == 0)
		return (write(1, "0", 1));
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		size++;
	}
	if (n >= 10)
		size += nbr_print(n / 10);
	write(1, &"0123456789"[n % 10], 1);
	return (size + 1);
}

int	ft_uitoa(unsigned int g)
{
	int	i;

	i = 0;
	if (g >= 10)
		i += ft_uitoa(g / 10);
	write(1, &"0123456789"[g % 10], 1);
	return (i + 1);
}

int	hex_print(unsigned long long x, char g)
{
	int	len;

	len = 0;
	if (x >= 16)
		len += hex_print((x / 16), g);
	if (g == 'x')
		len += write(1, &"0123456789abcdef" [x % 16], 1);
	if (g == 'X')
		len += write(1, &"0123456789ABCDEF" [x % 16], 1);
	return (len);
}

int	ptr_print(unsigned long long number)
{
	int	len;

	write(1, "0x", 2);
	len = hex_print(number, 'x');
	return (len + 2);
}
