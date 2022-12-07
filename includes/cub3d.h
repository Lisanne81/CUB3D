/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cub3d.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:00:41 by lhoukes       #+#    #+#                 */
/*   Updated: 2022/12/07 20:16:17 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CUB3D_H
# define CUB3D_H

/*-COLORS---------------------------------------------------------------------*/
# define R124 "\e[38;5;196m"
# define B17 "\e[38;5;202m"
# define B18 "\e[38;5;209m"
# define B19 "\e[38;5;214m"
# define B20 "\e[38;5;216m"
# define B21 "\e[38;5;21m"
# define G22 "\e[38;5;22m"
# define B23 "\e[38;5;23m"
# define Y185 "\e[38;5;185m"
# define G40 "\e[38;5;40m"
# define G41 "\e[38;5;41m"
# define G42 "\e[38;5;42m"
# define G43 "\e[38;5;43m"
# define G46 "\e[38;5;46m"
# define G47 "\e[38;5;47m"
# define G48 "\e[38;5;48m"
# define G49 "\e[38;5;49m"
# define G50 "\e[38;5;50m"
# define RESET "\e[0m"

/*-LIBS-----------------------------------------------------------------------*/

# include "./get_next_line.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <time.h>
# include <fcntl.h>
# include <stdbool.h>
# include <math.h>
typedef enum	e_direction
{
	NORTH,
	SOUTH,
	WEST,
	EAST,
	NO_MOVE
}	t_direction;
typedef struct s_floor
{
	int				x;
	int				y;
	// mlx_texture_t	*tex_floor;
}	t_floor;
typedef struct s_wall
{
	int				x;
	int				y;
	// mlx_texture_t	*tex_wall;
}	t_wall;

// typedef struct s_exit
// {
// 	int				x;
// 	int				y;
// 	int				exit_count;
// 	mlx_texture_t	*tex_exit[2];
// 	mlx_image_t		*i_exit;		
// }	t_exit;

typedef struct s_collect
{
	int				x;
	int				y;
	int				c_count;
	int				collect_on_off;	
	// mlx_texture_t	*tex_collect[6];
	// mlx_image_t		*i_collect;
}	t_collect;

typedef struct s_map
{
	int				x_pos;
	int				y_pos;
	int				player;
	int				exit;
	char			component;
	int				inst_index;
	t_floor			floor;
	t_wall			wall;
	// t_exit			t_exit;
	struct s_map	*next;
}	t_map;

typedef enum e_map_component
{
	PLAYER = 'P',
	VILLAIN = 'V',
	COLLECT = 'C',
	FLOOR = '0',
	WALL = '1',
	EXIT = 'E',
}	t_map_component;

typedef struct s_player
{
	int				x;
	int				y;
	int				player_check;
	int				player_direction;
	// mlx_texture_t	*tex_player_right[6];
	// mlx_texture_t	*tex_player_left[6];
	// mlx_image_t		*i_player;
}	t_player;

// typedef struct s_villain
// {
// 	int				x;
// 	int				y;
// 	int				villain_moves;
// 	int				villain_on_off;
// 	mlx_texture_t	*tex_villain[6];
// 	mlx_image_t		*i_villain;
// }	t_villain;

typedef struct s_game
{
	int			rows;
	int			coll;
	int			moves;
	double		time_frame;
	int			current_frame;
	int			counter_on_off;
	int			keyhook_on_of;
	mlx_t		*mlx;
	// mlx_image_t	*image_counter;
	// mlx_image_t	*steps;
	// mlx_image_t	*background;
	// mlx_image_t	*lose;
	// mlx_image_t	*win;
	// mlx_image_t	*earth;
	// mlx_image_t	*escape;
	t_map		*map;
	t_player	player;
	//t_villain	villain;
	t_collect	collect;
	//t_exit		exit;
}	t_game;

int		main(int argc, char **argv);

#endif