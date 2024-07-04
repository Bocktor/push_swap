/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:14:12 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 15:30:46 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ra(t_list **arg)
{
	t_list	*save;

	if (ft_lstsize(arg[0]) == 1)
		return (arg);
	ft_lstadd_back(&(arg[0]), ft_lstnew(arg[0]->content));
	save = arg[0]->next;
	ft_lstdelone(arg[0], delete_mem);
	arg[0] = save;
	arg[0]->back = NULL;
	ft_printf("ra\n");
	return (arg);
}

t_list	**rb(t_list **arg)
{
	t_list	*save;

	if (ft_lstsize(arg[1]) == 1)
		return (arg);
	ft_lstadd_back(&(arg[1]), ft_lstnew(arg[1]->content));
	save = arg[1]->next;
	ft_lstdelone(arg[1], delete_mem);
	arg[1] = save;
	arg[1]->back = NULL;
	ft_printf("rb\n");
	return (arg);
}

t_list	**rr(t_list **arg)
{
	arg = ra(arg);
	arg = rb(arg);
	ft_printf("rr\n");
	return (arg);
}
