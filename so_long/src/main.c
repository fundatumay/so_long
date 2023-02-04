/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:25:32 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/07 01:54:19 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
		err_msg("Error : Argument count is not 2");
	map_control(av, &game);
	size_control(&game);
	mlx_create(&game);
	mlx_loop(game.mlx);
}
