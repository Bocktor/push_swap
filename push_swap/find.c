/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:09:24 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 15:03:12 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_list *arg)
{
	int	s;
	int	i;
	int	integer;
	int	save;

	i = 0;
	s = arg->value;
	save = 0;
	while (arg != NULL)
	{
		integer = arg->value;
		if (s <= integer)
		{
			s = arg->value;
			save = i;
		}
		i++;
		arg = arg->next;
	}
	return (save);
}

int	find_lowest(t_list *arg)
{
	int		s;
	int		integer;
	int		i;
	int		save;

	i = 0;
	s = arg->value;
	save = 0;
	while (arg != NULL)
	{
		integer = arg->value;
		if (s >= integer)
		{
			s = arg->value;
			save = i;
		}
		i++;
		arg = arg->next;
	}
	return (save);
}
