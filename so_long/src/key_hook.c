/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:31:54 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/06 21:45:26 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// hook : 2 = key & 17 = destroy
// key_hook: 53 = ESC / 2 = D / 0 = A / 1 = S / 13 = W
// key_hook fonksiyonunda yönü buluyoruz. Bunu direction ile aktarıyoruz.
// walking: bu fonksiyonda ise o yönde '-' veya '+' mi ilerleyeceğimizi bul.
// walking: y kısmını negatif ile çarpma sebebimiz y ekseninde yukarı çıktıkça
// indis değerimiz azalıyor. Yani ters işliyorlar.

void	hook(t_game *game)
{
	mlx_hook(game->win, 2, 0, key_hook, game);
	mlx_hook(game->win, 17, 0, exit_hook, game);
}

static void	step_count(t_game *game)
{
	game->step_count++;
	ft_printf("Step: %d\r", game->step_count);
}

static int	find_new_position(int y, int x, t_game *game)
{
	if (game->map[game->player_y + y][game->player_x + x] == '1')
		return (0);
	else if (game->map[game->player_y + y][game->player_x + x] == 'C')
	{
		game->map[game->player_y + y][game->player_x + x] = '0';
		game->coin_collected++;
	}
	else if (game->map[game->player_y + y][game->player_x + x] == 'E')
	{
		exit_door(game);
		return (0);
	}
	return (1);
}

static int	walking(int key_code, t_game *game, int direction)
{
	if (key_code == 2 || key_code == 0)
	{
		if (find_new_position(0, direction, game) == 0)
			return (0);
		mlx_put_image_to_window(game->mlx, game->win, game->img.bg,
			game->player_x * IMG_SIZE, game->player_y * IMG_SIZE);
		game->player_x += direction;
	}
	if (key_code == 13 || key_code == 1)
	{
		if (find_new_position(-direction, 0, game) == 0)
			return (0);
		mlx_put_image_to_window(game->mlx, game->win, game->img.bg,
			game->player_x * IMG_SIZE, game->player_y * IMG_SIZE);
		game->player_y -= direction;
	}
	step_count(game);
	mlx_put_image_to_window(game->mlx, game->win, game->img.bg,
		game->player_x * IMG_SIZE, game->player_y * IMG_SIZE);
	mlx_put_image_to_window(game->mlx, game->win, game->img.character,
		game->player_x * IMG_SIZE, game->player_y * IMG_SIZE);
	return (0);
}

int	key_hook(int key_code, t_game *game)
{
	if (key_code == 53)
		err_msg("Exit Success");
	else if (key_code == 2 || key_code == 13)
		walking(key_code, game, 1);
	else if (key_code == 0 || key_code == 1)
		walking(key_code, game, -1);
	return (0);
}
