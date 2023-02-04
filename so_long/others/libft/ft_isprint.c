/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:46:18 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/27 19:46:24 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Yazdırılabilir karakter mi sorgular (32-126)

int	ft_isprint(int c)
{
	return (c <= 126 && c >= 32);
}

/*
int	main(void)
{
	int	a = 24;
	printf("%d", ft_isprint(a));
}
*/
