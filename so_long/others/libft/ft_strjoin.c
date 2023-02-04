/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:24:50 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/03 00:23:53 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//C = {'one','two','three'}; -->> str = strjoin(C) -->> str = 'one two three'

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	newstr = (char *) malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}
