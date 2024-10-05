/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:34:14 by danielasayu       #+#    #+#             */
/*   Updated: 2024/10/04 21:42:58 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_validate(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 5 || argc == 6)
	{
		if (ft_validate(argv + 1))
		{
			error_exit("Input Error: Invalid input");
			return (1);
		}
		parse_input(&data, argv);
		data_init(&data);
		sim_start(&data);
		free_things(&data);
	}
	else
		error_exit("Input Error\n"
			YELLOW "Please enter: ./philo <no. of philos> <time_to_die>"
			" <time_to_eat> <time_to_sleep> <max_meals> (optional)\n"
			"For example: ./philo 5 800 200 200 7" RESET);
	return (0);
}
