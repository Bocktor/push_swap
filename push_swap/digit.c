/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:12:32 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 18:40:12 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pow(int num, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (10);
	while (power > 1)
	{
		num = num * 10;
		power--;
	}
	return (num);
}

int	ft_digitlen(int digit)
{
	int	i;

	i = 0;
	while (digit > 9)
	{
		digit = digit / 10;
		i++;
	}
	i++;
	return (i);
}

int	ft_digitsingle(int digit, int reg)
{
	int	reminder;

	while (reg >= 0)
	{
		reminder = digit % 10;
		digit = digit / 10;
		reg--;
	}
	return (reminder);
}

int	single_int(int save, int reg)
{
	int	count;
	int	single;

	count = ft_digitlen(save);
	if (reg <= count)
		single = ft_digitsingle(save, reg);
	else
		single = 0;
	return (single);
}
