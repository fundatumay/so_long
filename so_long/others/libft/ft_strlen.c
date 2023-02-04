/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:03:27 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/27 20:03:30 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//stringin uzunluğunu döndürür

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char a[] = "tumaya";
	printf("%zu", ft_strlen(a));
}
*/

//NULL'ı da sayıyor aslında ama index hesabı yaptığımız
//ve sıfır (0) dan başlattığımız için çıkan sonuç doğru oluyo.
//İndisi 0'dan başlatıp eleman sayısını bir eksiltmiş
//NULL'ı da koyarak bir arttırıyoruz.
