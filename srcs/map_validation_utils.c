/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:11:44 by arakotom          #+#    #+#             */
/*   Updated: 2024/07/31 16:16:32 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void init_map_count(t_map_count *map_count)
{
	map_count->x = 0;
	map_count->y = 0;
	map_count->empty = 0;
	map_count->wall = 0;
	map_count->item = 0;
	map_count->exit = 0;
	map_count->player = 0;
}

void set_map_count(t_map_count *map_count, char **map)
{
	int i;
	int j;

	i = 0;
	map_count->x = ft_strlen(map[0]);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == MAP_0)
				map_count->empty++;
			else if (map[i][j] == MAP_W)
				map_count->wall++;
			else if (map[i][j] == MAP_I)
				map_count->item++;
			else if (map[i][j] == MAP_E)
				map_count->exit++;
			else if (map[i][j] == MAP_P)
				map_count->player++;
			j++;
		}
		i++;
	}
	map_count->y = i;
}

void init_player(t_player *player, char **map)
{
	int i;
	int j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == MAP_P)
			{
				player->x = j;
				player->y = i;
				return;
			}
			j++;
		}
		i++;
	}
}

void find_way(char **map, t_map_count *map_count, int player_x, int player_y)
{
	if (map[player_y][player_x] == MAP_W)
		return;
	if (map[player_y][player_x] == MAP_F)
		return;
	if (map[player_y][player_x] == MAP_I)
		map_count->item--;
	if (map[player_y][player_x] == MAP_E)
		map_count->exit--;
	map[player_y][player_x] = MAP_F;
	find_way(map, map_count, player_x + 1, player_y);
	find_way(map, map_count, player_x - 1, player_y);
	find_way(map, map_count, player_x, player_y + 1);
	find_way(map, map_count, player_x, player_y - 1);
}
