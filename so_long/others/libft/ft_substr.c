/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:49:36 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/28 19:29:01 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Belirli bir string içinde starttan başlayarak len kadarlık kısmı yazıyor
//ft_substr("fundatumay",5,3) --> "tum"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*src;

	i = 0;
	src = (char *)s;
	if (!src)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if ((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
		str = (char *)malloc((sizeof(char) * len) + 1);
		if (!str)
			return (NULL);
		ft_strlcpy (str, (char *)(s + start), len + 1);
	}
	return (str);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		newstr = (char *)malloc((sizeof(char)));
		if (!newstr)
			return (NULL);
		*newstr = '\0';
	}
	else
	{
		newstr = (char *) malloc(sizeof(char) * len + 1);
		if (!newstr)
			return (NULL);
		ft_strlcpy(newstr, s + start, len + 1);
	}
	return (newstr);
}
*/

/*
int	main(void)
{
	char	array[] = "funda tumay";
	printf("%s", ft_substr(array, 0, 4));
}
*/
