/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:39:52 by arakotom          #+#    #+#             */
/*   Updated: 2024/07/31 16:13:24 by arakotom         ###   ########.fr       */
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

typedef struct s_map_count
{
	int x;
	int y;
	int empty;
	int wall;
	int item;
	int exit;
	int player;
} t_map_count;

typedef struct s_player
{
	int x;
	int y;
	int move;
	int score;
} t_player;

typedef struct s_game
{
	void *mlx;
	void *win;
	char **map;
	int win_w;
	int win_h;
	t_map_count map_count;
	int ratio;
	t_player player;
} t_game;

#endif
