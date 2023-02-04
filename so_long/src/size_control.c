/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 04:01:57 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/07 02:07:59 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	size_control(t_game *game)
{
	int		fd;
	char	*line;
	int		x;
	int		y;

	fd = open(game->map_name, O_RDONLY);
	line = get_next_line(fd);
	x = ft_strlen(line);
	y = 0;
	while (1)
	{
		free(line);
		y++;
		line = get_next_line(fd);
		if (line[0] == '\0')
			break ;
		if (x != (int)ft_strlen(line) && line[0] != '\0')
			err_msg("Error : Map is not rectangular");
	}
	if (!line)
		free(line);
	game->map_height = y;
	game->map_width = x - 1;
	close (fd);
}

void	min_element_control(t_game *game)
{
	if (game->player_count != 1)
	{
		printf("%d\n", game->player_count);
		err_msg("There must be 1 player on the map");
	}
	if (game->exit_count != 1)
	{
		printf("%d", game->exit_count);
		err_msg("There must be 1 exit on the map");
	}
	if (game->coin_count < 1)
		err_msg("There must be 1 collectible at least");
	if (game->wall_count < 9)
		err_msg("There is no playable game. Check the wall count");
	if (game->unwanted_character_count != 0)
		err_msg("Map must contain only [0,1,E,P,C]");
}

void	wall_control(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < game->map_width)
	{
		if (game->map[0][x++] != '1')
			err_msg("Error: Map is not surrounded by walls");
	}
	while (y < game->map_height)
	{
		if (game->map[y][0] != '1' || game->map[y][game->map_width - 1] != '1')
			err_msg("Error: Map is not surrounded by wallss");
		y++;
	}
	x = 0;
	while (x < game->map_width)
		if (game->map[game->map_height -1][x++] != '1')
			err_msg("Error: Map is not surrounded by wallsss");
}
