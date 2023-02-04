/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:32:23 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/13 16:32:25 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

// Ascii tablosunda bulunuyor mu diye sorgular

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main(void)
{
	int c = 9;
	printf("%d", ft_isascii(c));
}
*/
