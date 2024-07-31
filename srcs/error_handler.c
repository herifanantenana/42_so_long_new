/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:05:40 by arakotom          #+#    #+#             */
/*   Updated: 2024/07/31 16:03:23 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void prog_error_exit(char *msg)
{
	ft_printf("\033[1;31m⚙️ Program error :\033[0m\n%s", msg);
	exit(1);
}

void map_error_exit(char **map, const char *msg)
{
	if (map)
		ft_free_tab_str(map);
	ft_printf("\033[1;31m🗺️ Map error :\033[0m\n%s", msg);
	exit(1);
}

void map_file_error_exit(const char *msg)
{
	ft_printf("\033[1;31m📄 Map file error :\033[0m\n%s", msg);
	exit(1);
}
