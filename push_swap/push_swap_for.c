/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_for.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:23:32 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 15:36:58 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_list	**push_swap_for_under_5(t_list **arg, int size)
// {
// 	int	lowest;
// 	int	biggest;
// 	int	i;

// 	biggest = find_biggest(arg[0]);
// 	i = 0;
// 	while ((arg[0]->value) != 4)
// 	{
// 		if (i == 5)
// 			break ;
// 		opti_move(arg, biggest);
// 		i++;
// 	}
// 	arg = opti_pb(arg);
// 	if (size > 4)
// 	{
// 		lowest = find_lowest(arg[0]);
// 		i = 0;
// 		while ((arg[0]->value) != 0)
// 		{
// 			if (i == 5)
// 				break ;
// 			opti_move(arg, lowest);
// 			i++;
// 		}
// 		arg = opti_pb(arg);
// 	}
// 	if (orded(arg[0]) == -1)
// 		arg = push_swap_for_under_3(arg);
// 	lowest = find_lowest(arg[1]);
// 	biggest = find_biggest(arg[1]);
// 	arg = opti_pa(arg);
// 	if (biggest != lowest)
// 		arg = opti_pa(arg);
// 	i = 0;
// 	while ((arg[0]->value) != 0)
// 	{
// 		if (i == 5)
// 			break ;
// 		opti_move(arg, lowest);
// 		i++;
// 	}
// 	return (arg);
// }

t_list	**push_swap_for_4(t_list **arg)
{
	int	lowest;
	int	biggest;

	biggest = find_biggest(arg[0]) + 1;
	while ((arg[0]->value) != 3)
		opti_move(arg, biggest);
	arg = opti_pb(arg);
	if (orded(arg[0]) == -1)
		arg = push_swap_for_under_3(arg);
	lowest = find_lowest(arg[1]);
	arg = opti_pa(arg);
	opti_ra(arg);
	return (arg);
}

t_list	**push_swap_for_5(t_list **arg)
{
	int	lowest;
	int	biggest;

	biggest = find_biggest(arg[0]) + 1;
	while ((arg[0]->value) != 4)
		opti_move(arg, biggest);
	arg = opti_pb(arg);
	lowest = find_lowest(arg[0]);
	while ((arg[0]->value) != 0)
		opti_move(arg, lowest);
	arg = opti_pb(arg);
	if (orded(arg[0]) == -1)
		arg = push_swap_for_under_3(arg);
	lowest = find_lowest(arg[1]);
	biggest = find_biggest(arg[1]);
	arg = opti_pa(arg);
	if (biggest != lowest)
		arg = opti_pa(arg);
	while ((arg[0]->value) != 0)
		opti_move(arg, lowest);
	return (arg);
}

t_list	**push_swap_for_under_3(t_list **arg)
{
	int	lowest;
	int	biggest;

	lowest = find_lowest(arg[0]);
	biggest = find_biggest(arg[0]);
	if (lowest == 0 && biggest == 1)
	{
		arg = sa(arg);
		return (opti_ra(arg));
	}
	if (lowest == 1 && biggest == 0)
		return (opti_ra(arg));
	if (lowest == 2 && biggest == 0)
	{
		arg = sa(arg);
		return (opti_rra(arg));
	}
	if (lowest == 2 && biggest == 1)
		return (opti_rra(arg));
	if (lowest == 1 && biggest == 2)
		return (sa(arg));
	return (NULL);
}

t_list	**push_swap(t_list **arg)
{
	int		size;
	t_list	*save;

	save = arg[0];
	if (orded(arg[0]) == 1)
		return (arg);
	size = ft_lstsize(save);
	if (size <= 3)
		return (push_swap_for_under_3(arg));
	if (size == 4)
		return (push_swap_for_4(arg));
	if (size == 5)
		return (push_swap_for_5(arg));
	if (size > 5)
		return (perfect_radix_sort(arg));
	ft_printf("NULL");
	return (NULL);
}
