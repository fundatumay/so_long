/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:46:54 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/06 13:46:59 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//küçük olarak gelen harfi büyük olarak döndürüyo

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c = c - 32;
	return (c);
}

/*
int	main(void)
{
	int	c = 'a';
	printf("%c", ft_toupper(c));
}
*/
