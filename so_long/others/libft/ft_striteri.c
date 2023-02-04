/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:28:30 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/29 13:33:50 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s stringinin her bir elemanına ft_func fonksiyonunu uygular
//Mesela ft_func harf büyütme olsun
//char *s = "funda" -->> ft_strmapi(s, harf büyütme func) -->> s = "FUNDA"
//return değeri vermeyen bir fonksiyon işlemi yapıp bırakıyo
//Eğer gerekli olursa her karakter adresi ile gönderilmelidir
//Parametre olarak içine bir fonksiyonun adresini alıyo
//adresi almasının nedeni fonksiyonu kullanabilmek için RAM deki yeri lazım
//fonksiyon üzerinde işlem yapabilmek için adresine ihtiyacı var

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
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
