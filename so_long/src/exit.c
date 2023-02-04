/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:42:05 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/07 01:53:33 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// exit_hook: Bu fonk. zorunlu olarak int ve t_list değeri alıyor.
// Hata dönmesin diye voide döndürdüm.

void	err_msg(char *str)
{
	ft_printf("%s", str);
	exit(0);
}

int	exit_hook(int mouse_code, t_game *game)
{
	(void)mouse_code;
	(void)game;
	err_msg("Exit Success");
	return (0);
}

void	exit_door(t_game *game)
{
	if (game->coin_collected == game->coin_count)
		err_msg("FINISH");
	else
		ft_printf("Sorry, you can't exit.\n");
}
