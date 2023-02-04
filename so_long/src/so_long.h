/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay < ftumay@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:19:52 by ftumay            #+#    #+#             */
/*   Updated: 2022/12/07 02:01:17 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../others/ft_printf/ft_printf.h"
# include "../others/libft/libft.h"
# include "../others/minilibx/mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define IMG_SIZE 64

typedef struct l_image
{
	void	*character;
	void	*wall;
	void	*coin;
	void	*exit;
	void	*bg;
	int		img_h;
	int		img_w;
}			t_image;

typedef struct l_int_map
{
	int		l;
	int		r;
	int		u;
	int		d;
	int		read_count;
	int		step_count;
}			t_int_map;

typedef struct l_game
{
	char		**map;
	char		*map_name;
	void		*mlx;
	void		*win;
	int			map_height;
	int			map_width;
	int			coin_count;
	int			coin_collected;
	int			step_count;
	int			exit_count;
	int			exit_x;
	int			exit_y;
	int			wall_count;
	int			player_count;
	int			player_x;
	int			player_y;
	int			unwanted_character_count;
	t_image		img;
	t_int_map	i_map;
}			t_game;

void	err_msg(char *str);
void	ber_control(char *str);
void	map_control(char **av, t_game *game);
void	tmp_control(char *map_name);
void	size_control(t_game *game);
void	mlx_create(t_game *game);
void	map_backgraund_put(t_game *game);
void	map_create(t_game *game);
void	wall_control(t_game *game);
void	min_element_control(t_game *game);
void	hook(t_game *game);
int		key_hook(int key_code, t_game *game);
int		exit_hook(int mouse_code, t_game *game);
void	exit_door(t_game *game);
void	path_finder_map(t_game *list, int x, int y);

// get_next_line
char	*get_next_line(int fd);
void	*myfree(void *str);

#endif
