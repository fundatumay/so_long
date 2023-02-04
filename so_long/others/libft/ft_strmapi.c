/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:32:12 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/29 14:37:15 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s stringinin her bir elemanına ft_func fonksiyonunu uygular
//Mesela ft_func harf büyütme olsun
//char *s = "funda" -->> ft_strmapi(s, harf büyütme func) -->> news = "FUNDA"
//Parametre olarak içine bir fonksiyonun adresini alıyo
//adresi almasının nedeni fonksiyonu kullanabilmek için RAM deki yeri lazım
//fonksiyon üzerinde işlem yapabilmek için adresine ihtiyacı var

char	*ft_strmapi(char const *s, char (*ft_func)(unsigned int, char))
{
	int		i;
	char	*newstr;

	i = 0;
	if (!s || !ft_func)
		return (0);
	newstr = (char *)malloc (ft_strlen(s) + 1);
	if (!newstr)
		return (0);
	while (s[i] != '\0')
	{
		newstr[i] = (*ft_func)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*
void	ft_ft(unsigned int i, char *a)
{
	*a = *a + i;
}

int	main()
{
	char	a[] = "aaaaaa";
	ft_striteri(a, &ft_ft);
	printf("%s", a);
}
*/
