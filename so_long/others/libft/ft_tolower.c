/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:53:32 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/06 13:53:34 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// büyük olarak gelen harfi küçük olarak döndürüyo

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c = c + 32;
	return (c);
}

/*
int	main(void)
{
	int	c  = 'A';
	printf("%c", ft_tolower(c));
}
*/
