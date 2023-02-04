/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:49:18 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/06 15:49:21 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//String içinde char değerini arıyor
//Bulduğu son char dan sonrasını yazdırıyor

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen(s);
	while (str_len >= 0)
	{
		if (s[str_len] == (char)c)
			return ((char *)(s + str_len));
		str_len--;
	}
	return (0);
}

/*
int	main(void)
{
	char	s[] = "tripouille";
	int	c = 'z';
	printf("%s\n", ft_strrchr(s, c));
}
*/
