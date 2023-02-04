/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:49:42 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/21 11:41:20 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Diziyi boyutu kadar kopyalıyor ancak src dizisinin uzunluğunu döndürüyor
//src uzunluğu döndürmesi eski zamanlarda kod çalışıypr mu test amaçlı?

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	if (dest_size > 0)
	{
		while (i < (dest_size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char dest[] = "funda";
	char src[] = "tumaya";
	printf("%zu\n", ft_strlcpy(dest, src, 3));
	printf("%s", dest);
}
*/
