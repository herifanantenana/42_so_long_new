/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:39:52 by arakotom          #+#    #+#             */
/*   Updated: 2024/08/01 04:46:40 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
#define TYPES_H

typedef enum e_bool
{
	FALSE = 0,
	TRUE = 1,
} t_bool;

typedef struct s_coord
{
	int x;
	int y;
} t_coord;

typedef struct s_map_data
{
	int x;
	int y;
	int empty;
	int wall;
	int item;
	int exit;
	int player;
} t_map_data;

typedef struct s_player_img
{
	void *up;
	void *down;
	void *left;
	void *right;
} t_player_img;

typedef struct s_collect_img
{
	void *coin1;
	void *coin2;
	void *coin3;
} t_collect_img;

typedef struct s_exit_img
{
	void *close;
	void *open;
} t_exit_img;

typedef struct s_map
{
	char **map;
	t_map_data map_data;
	t_coord player;
	t_coord exit;
} t_map;

typedef struct s_assets
{
	void *wall;
	void *empty;
	t_player_img player;
	t_collect_img collect;
	t_exit_img exit;
} t_assets;

typedef struct s_game
{
	void *mlx;
	void *win;
	int win_w;
	int win_h;
	int ratio;
	t_map map;
	t_assets assets;
} t_game;

#endif
