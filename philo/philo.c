/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:34:14 by danielasayu       #+#    #+#             */
/*   Updated: 2024/07/10 16:49:47 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_table	table;

	if (argc == 5 || 6 == argc)
	{
		parse_input(&table, argv);
		data_init(&table);
	}
	else
	{
		printf("Error!\n");
	}
}
