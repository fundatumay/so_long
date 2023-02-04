/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:25:33 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/13 16:25:35 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//alfanumerik karakter testi yapar (sayı veya harf mi)

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int	main(void)
{
	int	c;
	c = ',';
	printf("%d", isalnum(c));
}
*/
