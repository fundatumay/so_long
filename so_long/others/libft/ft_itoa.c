/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:46:15 by ftumay            #+#    #+#             */
/*   Updated: 2022/04/01 03:37:16 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//integer bir değeri string şeklinde döndürüyor.

static char	*ft_writer(char *str, int bas, int n)
{
	int	i;
	int	b;
	int	c;

	i = 0;
	if (n > 9)
	{
		while (i < bas)
		{
			c = n;
			b = bas - 1 - i;
			while (b-- > 0)
				c /= 10;
			str[i++] = c % 10 + 48;
		}
	}
	else
	{
		str[i] = n + 48;
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	is_negative(int n, char *str, int bas)
{
	*str = '-';
	str++;
	str = ft_writer(str, bas, (n * -1));
	str = str - 1;
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	int		n1;
	char	*str;

	n1 = n;
	sign = 0;
	if (n1 < 0)
	{
		sign = 1;
		n1 *= -1;
	}
	i = 1;
	while (n1 >= 10 && ++i)
		n1 = n1 / 10;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (i + sign + 1));
	if (!str)
		return (0);
	else if (n < 0)
		is_negative(n, str, i);
	else
		ft_writer(str, i, n);
	return (str);
}

/*
int	main(void)
{
	printf("Int min: %s\n", ft_itoa(-2147483648));
	printf("Int max: %s\n", ft_itoa(2147483647));
	printf("Zero: %s\n", ft_itoa(0));
	printf("Positive: %s\n", ft_itoa(1));
	printf("Negative : %s\n", ft_itoa(-1));
}
*/
