/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:23:06 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/21 21:30:45 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s = {funda/tumay/kocaeli/izmir/asd} ft_split(s, '/')
// -->> s{'funda', 'tumay', 'kocaeli', 'izmir'}
//Gelen tek boyutlu dizi seperatörlerle ayrılarak iki boyutlu hale gelir

static int	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		count++;
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_strcreate(const char *s, char c, size_t i)
{
	size_t	len;
	size_t	tmp;

	len = 0;
	tmp = i;
	while (s[tmp] != c && s[tmp])
	{
		tmp++;
		len++;
	}
	return (ft_substr(s, i, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	res_i;
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((sizeof(char *) * ft_count_word(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	res_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			res[res_i] = ft_strcreate(s, c, i);
			res_i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	res[res_i] = 0;
	return (res);
}

/*
int	main(void)
{
	const char *a = "funda tumay 42 school";
	char b = ' ';

	char	**sonuc = ft_split(a, b);
	while (*sonuc)
	{
		printf("%s\n", *sonuc);
		sonuc++;
	}
}
*/
