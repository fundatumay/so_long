/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:51:33 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/29 17:18:07 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//file descriptora number değer yazar
//eğer negatif bir değerse işareti yaz sonra poitife çevir.
//her ft_putnbr_fd fonksiyonuna gönderdiğinde iç içe geçmiş fonk. oluşturursun
//Fonk.ların sonuna geldiğinde yani n<=9 ise chara döndür modunu al
//ft_putchar ile yaz. yazdırdığı 3 karakteri olur
//Sonrasında bir dış fonksiyona geçer 38 için aynı işlemi yapıp modunu alır
//mod sonucu olan 8 i chara döndürüp yazdırır.

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}

/*
int main(void)
{
	int a = 3847927;
	int fd = 8;
	t_putnbr_fd(a, fd);
}
*/
