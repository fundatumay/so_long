/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:49:53 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/04 12:49:57 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = ft_strlen(dest);
	if (dest_size <= dest_len)
		return (dest_size + src_len);
	i = 0;
	while (src[i] != '\0' && j < dest_size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char	dest[] = "funda";
	char	src[] = "tumay";
	printf("%zu\n", ft_strlcat(dest, src, 2));
	printf("%s\n", dest);
}
*/
