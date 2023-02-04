/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:14:16 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/21 16:14:51 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//string üzerinde baştan ve sondan set içindeki harfleri bulur.
//Farklı harf gördüğünde durur.
//s1 = "asdfundatumayasd" && set = "asd" -->> "fundatumay"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
int	main(void)
{
	char	s1[] =  "asdfundatumayasd";
	char	set[] = "asd";
	printf("%s", ft_strtrim(s1, set));
}
*/
