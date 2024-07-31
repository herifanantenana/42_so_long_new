/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:49:14 by arakotom          #+#    #+#             */
/*   Updated: 2024/07/31 16:12:43 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int main(int argc, char const *argv[])
{

	if (argc != 2)
		prog_error_exit(ERR_TOO_FEW_ARGS);
	check_map_file(argv[1]);
	check_map_validation(argv[1]);
	return 0;
}
