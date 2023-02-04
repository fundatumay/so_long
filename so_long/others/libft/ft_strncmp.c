/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:43:27 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/06 16:43:32 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//n tane elemanı compare (karşılaştırma) yapıp farklı olan ilk
//elemanların ascii değer farkını döndürür

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "funds";
	char	s2[] = "funda";
	size_t		n = 5;
	printf("%d", ft_strncmp(s1, s2, n));
}
*/
