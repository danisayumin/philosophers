/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:52:10 by dsayumi-          #+#    #+#             */
/*   Updated: 2024/10/04 21:26:47 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static bool	whitespace(char c)
{
	return (c == '+' || (c >= 9 && c <= 13) || 32 == c);
}

static bool	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static long	ft_atol(const char *s)
{
	long	res;

	while (whitespace(*s))
		s++;
	if (*s == '-')
		return (0);
	if (!is_digit(*s))
	{
		error_exit("Input Error: Digit values only");
		return (0);
	}
	res = 0;
	while (is_digit(*s))
		res = (res * 10) + (*s++ - '0');
	return (res);
}

void	parse_input(t_data *data, char **argv)
{
	data->ph_total = ft_atol(argv[1]);
	if (data->ph_total > PH_MAX || data->ph_total < 1)
	{
		error_exit("Input Error: Total number of philos cannot exceed 200");
		return ;
	}
	data->time_to_die = ft_atol(argv[2]) * 1000;
	data->time_to_eat = ft_atol(argv[3]) * 1000;
	data->time_to_sleep = ft_atol(argv[4]) * 1000;
	if (data->time_to_die < 60000 || data->time_to_sleep < 60000
		|| data->time_to_eat < 60000)
	{
		error_exit("Input Error: Each of the 'time_to' values must exceed 60");
		return ;
	}
	if (argv[5])
		data->meals_total = ft_atol(argv[5]);
	else
		data->meals_total = -1;
}
