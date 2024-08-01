/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assets_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 06:35:59 by arakotom          #+#    #+#             */
/*   Updated: 2024/08/01 06:52:09 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void init_assets_16px(t_game *game)
{
	t_player_img player_img;
	t_collect_img collect_img;
	t_exit_img exit_img;
	t_assets assets;

	player_img.up = set_img_mlx(game, "assets/16px/player8.xmp");
	player_img.down = set_img_mlx(game, "assets/16px/player2.xmp");
	player_img.left = set_img_mlx(game, "assets/16px/player4.xmp");
	player_img.right = set_img_mlx(game, "assets/16px/player6.xmp");
	collect_img.coin1 = set_img_mlx(game, "assets/16px/coin01.xmp");
	collect_img.coin2 = set_img_mlx(game, "assets/16px/coin11.xmp");
	collect_img.coin3 = set_img_mlx(game, "assets/16px/coin12.xmp");
	exit_img.close = set_img_mlx(game, "assets/16px/exit01.xmp");
	exit_img.open = set_img_mlx(game, "assets/16px/exit11.xmp");
	assets.empty = set_img_mlx(game, "assets/16px/ground2.xmp");
	assets.wall = set_img_mlx(game, "assets/16px/wall2.xpm");
	assets.player = player_img;
	assets.collect = collect_img;
	assets.exit = exit_img;
	game->assets = assets;
}

void init_assets_24px(t_game *game)
{
	t_player_img player_img;
	t_collect_img collect_img;
	t_exit_img exit_img;
	t_assets assets;

	player_img.up = set_img_mlx(game, "assets/24px/player8.xmp");
	player_img.down = set_img_mlx(game, "assets/24px/player2.xmp");
	player_img.left = set_img_mlx(game, "assets/24px/player4.xmp");
	player_img.right = set_img_mlx(game, "assets/24px/player6.xmp");
	collect_img.coin1 = set_img_mlx(game, "assets/24px/coin01.xmp");
	collect_img.coin2 = set_img_mlx(game, "assets/24px/coin11.xmp");
	collect_img.coin3 = set_img_mlx(game, "assets/24px/coin12.xmp");
	exit_img.close = set_img_mlx(game, "assets/24px/exit01.xmp");
	exit_img.open = set_img_mlx(game, "assets/24px/exit11.xmp");
	assets.empty = set_img_mlx(game, "assets/24px/ground2.xmp");
	assets.wall = set_img_mlx(game, "assets/24px/wall2.xpm");
	assets.player = player_img;
	assets.collect = collect_img;
	assets.exit = exit_img;
	game->assets = assets;
}

void init_assets_32px(t_game *game)
{
	t_player_img player_img;
	t_collect_img collect_img;
	t_exit_img exit_img;
	t_assets assets;

	player_img.up = set_img_mlx(game, "assets/32px/player8.xmp");
	player_img.down = set_img_mlx(game, "assets/32px/player2.xmp");
	player_img.left = set_img_mlx(game, "assets/32px/player4.xmp");
	player_img.right = set_img_mlx(game, "assets/32px/player6.xmp");
	collect_img.coin1 = set_img_mlx(game, "assets/32px/coin01.xmp");
	collect_img.coin2 = set_img_mlx(game, "assets/32px/coin11.xmp");
	collect_img.coin3 = set_img_mlx(game, "assets/32px/coin12.xmp");
	exit_img.close = set_img_mlx(game, "assets/32px/exit01.xmp");
	exit_img.open = set_img_mlx(game, "assets/32px/exit11.xmp");
	assets.empty = set_img_mlx(game, "assets/32px/ground2.xmp");
	assets.wall = set_img_mlx(game, "assets/32px/wall2.xpm");
	assets.player = player_img;
	assets.collect = collect_img;
	assets.exit = exit_img;
	game->assets = assets;
}

void init_assets_48px(t_game *game)
{
	t_player_img player_img;
	t_collect_img collect_img;
	t_exit_img exit_img;
	t_assets assets;

	player_img.up = set_img_mlx(game, "assets/48px/player8.xmp");
	player_img.down = set_img_mlx(game, "assets/48px/player2.xmp");
	player_img.left = set_img_mlx(game, "assets/48px/player4.xmp");
	player_img.right = set_img_mlx(game, "assets/48px/player6.xmp");
	collect_img.coin1 = set_img_mlx(game, "assets/48px/coin01.xmp");
	collect_img.coin2 = set_img_mlx(game, "assets/48px/coin11.xmp");
	collect_img.coin3 = set_img_mlx(game, "assets/48px/coin12.xmp");
	exit_img.close = set_img_mlx(game, "assets/48px/exit01.xmp");
	exit_img.open = set_img_mlx(game, "assets/48px/exit11.xmp");
	assets.empty = set_img_mlx(game, "assets/48px/ground2.xmp");
	assets.wall = set_img_mlx(game, "assets/48px/wall2.xpm");
	assets.player = player_img;
	assets.collect = collect_img;
	assets.exit = exit_img;
	game->assets = assets;
}

void init_assets_64px(t_game *game)
{
	t_player_img player_img;
	t_collect_img collect_img;
	t_exit_img exit_img;
	t_assets assets;

	player_img.up = set_img_mlx(game, "assets/64px/player8.xmp");
	player_img.down = set_img_mlx(game, "assets/64px/player2.xmp");
	player_img.left = set_img_mlx(game, "assets/64px/player4.xmp");
	player_img.right = set_img_mlx(game, "assets/64px/player6.xmp");
	collect_img.coin1 = set_img_mlx(game, "assets/64px/coin01.xmp");
	collect_img.coin2 = set_img_mlx(game, "assets/64px/coin11.xmp");
	collect_img.coin3 = set_img_mlx(game, "assets/64px/coin12.xmp");
	exit_img.close = set_img_mlx(game, "assets/64px/exit01.xmp");
	exit_img.open = set_img_mlx(game, "assets/64px/exit11.xmp");
	assets.empty = set_img_mlx(game, "assets/64px/ground2.xmp");
	assets.wall = set_img_mlx(game, "assets/64px/wall2.xpm");
	assets.player = player_img;
	assets.collect = collect_img;
	assets.exit = exit_img;
	game->assets = assets;
}