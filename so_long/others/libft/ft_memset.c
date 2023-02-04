/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:55 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/27 20:17:58 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Diziye (*s), istenilen harften (b), istenilen kadar(len) koyar

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	a[] = "funda";
	printf("%s", ft_memset(a, 'r', 2));
}
*/
