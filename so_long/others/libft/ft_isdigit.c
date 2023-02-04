/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:24:25 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/13 16:24:36 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Rakam mı diye test eder

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

/*
int	main(void)
{
	int c = '5';
	printf("%d", isdigit(c));
}
*/
