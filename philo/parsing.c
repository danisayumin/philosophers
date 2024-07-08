/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:52:10 by dsayumi-          #+#    #+#             */
/*   Updated: 2024/07/08 16:13:01 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static inline bool is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static inline bool is_space(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

static const char *valid_input(const char *chr)
{
	int	len;
	const char	*num;

	len = 0;
	while (is_space(*chr))
		chr++;
	if (*chr == '+' )
		chr++;
	else if (*chr == '-')
		error_exit("Error: negative number\n");
	if (!is_digit(*chr))
		error_exit("Error: invalid input, only digits\n");
	num = chr;
	while (is_digit(*chr++))
		len++;
	if (len > 10)
		error_exit("Error: number too big\n");
	return (num);
}

static long	ft_atol(const char *chr)
{
	long	num;

	num = 0;
	chr = valid_input(chr);
	while (is_digit(*chr))
		num = num * 10 + (*chr++ - '0');
	if (num > INT_MAX)
		error_exit("Error: number too big\n");
	return (num);
}

void	parse_input(t_table *table, char **argv)
{
	
}