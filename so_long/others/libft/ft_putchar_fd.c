/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:46:06 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/29 16:35:16 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fd dediğimiz şey file descriptor oluyor
// 0 = stndart girdi / 1 = standart çıktı/ 2 = standart hata
// 3 ve üzerindeki tüm sayılar içinse oluşturduğum text dosyasına yazar.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
