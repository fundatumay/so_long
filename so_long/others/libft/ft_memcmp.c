/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:30 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/06 19:49:33 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s1 stringi ve s2 stringinin bytlerını karşılaştırır.
//Aynılarsa 0 değillerse bytelerı arasındaki farkı döndürür.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "fundd";
	char	s2[] = "funda";
	size_t		n = 5;
	printf("%d", ft_memcmp(s1, s2, n));
}
*/
