/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:09:37 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 16:32:03 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_lowest_radix(t_list *arg)
{
	char	*s;
	char	*integer;
	int		i;
	int		save;

	i = 0;
	while ((arg->value) != -1)
	{
		arg = arg->next;
		i++;
	}
	s = (char *)(arg->content);
	save = 0;
	while (arg != NULL)
	{
		integer = (char *)(arg->content);
		if ((ft_atoi(s) >= ft_atoi(integer) && ((arg->value) == -1)))
		{
			s = (char *)(arg->content);
			save = i;
		}
		i++;
		arg = arg->next;
	}
	return (save);
}

t_list	*convert_to_base_two_number(t_list *arg)
{
	int		reminder;
	int		i;
	int		val;
	int		num;
	t_list	*save;

	save = arg;
	while (save != NULL)
	{
		num = 0;
		i = 0;
		val = save->value;
		num = 0;
		while (val != 0)
		{
			reminder = val % 2;
			val = val / 2;
			num = reminder * ft_pow(10, i) + num;
			i++;
		}
		save->base = num;
		save = save->next;
	}
	return (arg);
}

t_list	*convert_to_tiny_number(t_list *arg)
{
	int		size;
	int		pos;
	int		tiny;
	t_list	*save;

	tiny = 0;
	size = ft_lstsize(arg);
	while (tiny != size)
	{
		save = arg;
		pos = find_lowest_radix(save);
		while (pos > 0)
		{
			save = save->next;
			pos--;
		}
		save->value = tiny;
		save->base = -1;
		tiny++;
	}
	return (arg);
}

t_list	*ft_convert(t_list *arg)
{
	arg = convert_to_tiny_number(arg);
	arg = convert_to_base_two_number(arg);
	return (arg);
}
