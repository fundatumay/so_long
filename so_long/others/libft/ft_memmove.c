/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:49:54 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/28 00:49:57 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Çakışma olmadan src ve destin aynı dizi üzerinde olması durumunda-
ve source destten büyükse gerçekleşir
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!src && !dest)
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, len);
	if (dest > src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	src [];

	*src = "start";
	printf("%s", ft_memmove(src + 2, src, 3));
}
*/
// (size_t)dest kullanımı dest'in başlangıç indisini (pointer gibi) verir.
// Burada dest'in başlangıç indisinin sayısal değerinden src'ninkini çıkarttık.
