/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:57:58 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/06 13:58:00 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bir stringin içerisinde char değeri arıyor. Bulduğu chardan sonrasını
//return veriyor
//integer tipindeki değişkeni char olarak aradığımız için dönüşümü yap

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i])
			return (0);
		i++;
	}
	return ((char *)(s + i));
}

/*
int	main(void)
{
	char	s[] = "funda";
	int	c = '0';
	printf("%s", ft_strchr(s, c));
}
*/
