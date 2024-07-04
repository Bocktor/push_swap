/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:06:35 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 13:39:50 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**opti_pa(t_list **arg)
{
	int	val;
	int	b;

	val = 0;
	b = 0;
	val = arg[1]->value;
	b = arg[1]->base;
	arg = pa(arg);
	arg[0]->value = val;
	arg[0]->base = b;
	return (arg);
}

t_list	**opti_pb(t_list **arg)
{
	int	val;
	int	b;

	val = 0;
	b = 0;
	val = arg[0]->value;
	b = arg[0]->base;
	arg = pb(arg);
	arg[1]->value = val;
	arg[1]->base = b;
	return (arg);
}

t_list	**opti_ra(t_list **arg)
{
	int		val;
	int		b;
	t_list	*save;

	val = arg[0]->value;
	b = arg[0]->base;
	arg = ra(arg);
	save = arg[0];
	arg[0] = ft_lstlast(arg[0]);
	arg[0]->value = val;
	arg[0]->base = b;
	arg[0] = save;
	return (arg);
}

t_list	**opti_rra(t_list **arg)
{
	int		val;
	int		b;
	t_list	*save;

	save = arg[0];
	arg[0] = ft_lstlast(arg[0]);
	val = arg[0]->value;
	b = arg[0]->base;
	arg[0] = save;
	arg = rra(arg);
	arg[0]->value = val;
	arg[0]->base = b;
	return (arg);
}

t_list	**opti_move(t_list **arg, int opti)
{
	if (opti <= ((ft_lstsize(arg[0]) / 2) + 1))
		arg = opti_ra(arg);
	if (opti > ((ft_lstsize(arg[0]) / 2) + 1))
		arg = opti_rra(arg);
	return (arg);
}
