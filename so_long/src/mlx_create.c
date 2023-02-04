/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:51:58 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/07 03:24:12 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_read(t_game *game)
{
	int		fd;
	int		i;
	int		j;
	char	*area;

	i = 0;
	j = 0;
	fd = open(game->map_name, O_RDONLY);
	game->map = (char **)malloc(sizeof(char *) * game->map_height);
	while (i < game->map_height)
	{
		j = 0;
		area = get_next_line(fd);
		game->map[i] = (char *)malloc(sizeof(char) * (game->map_width + 1));
		if (!area)
			break ;
		while (j < game->map_width)
		{
			game->map[i][j] = area[j];
			j++;
		}
		game->map[i][j] = '\0';
		i++;
		free(area);
	}
}

static void	image_create(t_game *game)
{
	game->img.img_w = IMG_SIZE;
	game->img.img_h = IMG_SIZE;
	game->img.character = mlx_xpm_file_to_image(game->mlx,
			"images/bugs_bunny.xpm", &game->img.img_w, &game->img.img_h);
	game->img.wall = mlx_xpm_file_to_image(game->mlx, "images/yosemite_sam.xpm",
			&game->img.img_w, &game->img.img_h);
	game->img.coin = mlx_xpm_file_to_image(game->mlx, "images/carrot.xpm",
			&game->img.img_w, &game->img.img_h);
	game->img.exit = mlx_xpm_file_to_image(game->mlx, "images/exit.xpm",
			&game->img.img_w, &game->img.img_h);
	game->img.bg = mlx_xpm_file_to_image(game->mlx, "images/grass.xpm",
			&game->img.img_w, &game->img.img_h);
}

static void	game_init(t_game *game)
{
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, game->map_width * IMG_SIZE,
			game->map_height * IMG_SIZE, "SoLong");
	game->coin_count = 0;
	game->coin_collected = 0;
	game->step_count = 0;
	game->exit_count = 0;
	game->wall_count = 0;
	game->player_count = 0;
	game->unwanted_character_count = 0;
}

void	mlx_create(t_game *game)
{
	game_init(game);
	image_create(game);
	map_read(game);
	map_backgraund_put(game);
	map_create(game);
	wall_control(game);
	path_finder_map(game, game->exit_x, game->exit_y);
	if (game->i_map.read_count != game->coin_count + 1)
		err_msg(">>> THE MAP IS WRONG");
	min_element_control(game);
	hook(game);
}
