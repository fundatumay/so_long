/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:08:18 by ftumay            #+#    #+#             */
/*   Updated: 2022/04/01 05:03:14 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//arrayden(string, dizi) integer tipine dönüşüm yapar.

int	ft_atoi(const char *str)
{
	long int	num;
	int			isaret;

	isaret = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isaret = -1;
	str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0') * isaret;
		if (num > 21474483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}

/*
int	main(void)
{
	char	array []= "+-54";
	printf("%d", ft_atoi(array));
}
*/
