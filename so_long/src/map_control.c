/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:02:04 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/05 23:26:22 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ber_control(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[len - 1] != 'r' || str[len - 2] != 'e'
		|| str[len - 3] != 'b' || str[len - 4] != '.')
		err_msg("Error : Your map is not '.ber' ");
	if (!str)
		free(str);
}

void	tmp_control(char *map_name)
{
	int	fd;

	fd = open(ft_strjoin("maps/", map_name), O_RDONLY);
	if (fd == -1)
		err_msg("Error : Map file is not found");
	close(fd);
	if (!map_name)
		free(map_name);
}

void	map_control(char **av, t_game *game)
{
	char	*map_name;

	map_name = av[1];
	map_name = ft_strjoin("maps/", map_name);
	game->map_name = map_name;
	free(map_name);
	ber_control(av[1]);
	tmp_control(av[1]);
}
