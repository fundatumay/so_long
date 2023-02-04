/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:04:51 by ftumay            #+#    #+#             */
/*   Updated: 2022/11/30 19:32:39 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char g)
{
	write(1, &g, 1);
	return (1);
}

int	ft_formats(va_list list, char g)
{
	int		len;

	len = 0;
	if (g == 'c')
		len = ft_putchar(va_arg(list, int));
	if (g == 's')
		len = array_print(va_arg(list, char *));
	if (g == 'i' || g == 'd')
		len = nbr_print(va_arg(list, int));
	if (g == 'u')
		len = ft_uitoa(va_arg (list, unsigned int));
	if (g == 'X' || g == 'x')
		len = hex_print(va_arg (list, unsigned int), g);
	if (g == 'p')
		len = ptr_print(va_arg (list, unsigned long long));
	if (g == '%')
		len = write(1, &g, 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_formats(list, str[i]);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(list);
	return (len);
}
