/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_free_exit.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 20:18:53 by lhoukes       #+#    #+#                 */
/*   Updated: 2022/12/07 20:19:27 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./MLX42/include/MLX42/MLX42.h"
#include "./includes/cub3d.h"

int	exit_this_way(char *message, int id)
{
	if (id == 0)
	{
		ft_putstr_fd(message, 1);
		exit(0);
	}
	else if (id == 1)
	{
		ft_putstr_fd(R124"ERROR\n"RESET, 1);
		ft_putstr_fd(message, 1);
		exit(1);
	}
	return (0);
}

void	free_map(t_map *map)
{
	t_map	*temp;

	if (map == NULL)
		return ;
	while (map != NULL)
	{
		temp = map;
		map = map->next;
		free(temp);
	}
}

void	exit_on_click(void *param)
{
	t_game	*game;

	game = param;
	clean_field(game);
	free_map(game->map);
	mlx_terminate(game->mlx);
	exit_this_way(R124"\nSo long...! and thanks for playing.\n", 0);
}
