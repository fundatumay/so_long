/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:24:13 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/21 13:17:25 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//İstenilen string kadar mallocta yer ayırıyo, stringi içine koyup return yapar

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!ret)
		return (NULL);
	while (str[i] != '\0')
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*
int	main(void)
{
	char	str[] = "fundatumay";
	printf("%s", ft_strdup(str));
}
*/

//ft_strlen(str) + 1 kısmındaki 1 sona koyulacak NULL için
