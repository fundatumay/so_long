/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_put.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:51:19 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/07 01:55:27 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_put(int i, int j, t_game *game)
{
	if (game->map[i][j] == '1')
		mlx_put_image_to_window(game->mlx, game->win, game->img.wall,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (game->map[i][j] == '0')
		mlx_put_image_to_window(game->mlx, game->win, game->img.bg,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (game->map[i][j] == 'C')
		mlx_put_image_to_window(game->mlx, game->win, game->img.coin,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (game->map[i][j] == 'E')
		mlx_put_image_to_window(game->mlx, game->win, game->img.exit,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (game->map[i][j] == 'P')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.character, j * IMG_SIZE, i * IMG_SIZE);
}

static void	map_element_counter(int i, int j, t_game *game)
{
	int	idiot;

	idiot = 0;
	if (game->map[i][j] == '1')
		game->wall_count++;
	else if (game->map[i][j] == '0')
		idiot++;
	else if (game->map[i][j] == 'C')
		game->coin_count++;
	else if (game->map[i][j] == 'E')
	{
		game->exit_count++;
		game->exit_x = j;
		game->exit_y = i;
	}
	else if (game->map[i][j] == 'P')
	{
		game->player_count++;
		game->player_x = j;
		game->player_y = i;
	}
	else
		game->unwanted_character_count++;
}

void	map_create(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < game->map_height)
	{
		j = 0;
		while (j < game->map_width)
		{
			map_element_counter(i, j, game);
			map_put(i, j, game);
			j++;
		}
		i++;
	}
}

void	map_backgraund_put(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < game->map_height)
	{
		j = 0;
		while (j < game->map_width)
		{
			mlx_put_image_to_window(game->mlx, game->win, game->img.bg,
				j * IMG_SIZE, i * IMG_SIZE);
			j++;
		}
		i++;
	}
}
