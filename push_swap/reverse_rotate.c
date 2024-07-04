/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:04:54 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 18:05:08 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**rra(t_list **arg)
{
	t_list	*save;
	t_list	*rr;

	if (ft_lstsize(arg[0]) == 1)
		return (arg);
	save = ft_lstlast(arg[0]);
	ft_lstadd_front(&(arg[0]), ft_lstnew(save->content));
	rr = arg[0];
	arg[0] = ft_lstlast(arg[0]);
	save = arg[0]->back;
	ft_lstdelone(arg[0], delete_mem);
	arg[0] = save;
	arg[0]->next = NULL;
	arg[0] = rr;
	ft_printf("rra\n");
	return (arg);
}

t_list	**rrb(t_list **arg)
{
	t_list	*save;
	t_list	*rr;

	if (ft_lstsize(arg[1]) == 1)
		return (arg);
	save = ft_lstlast(arg[1]);
	ft_lstadd_front(&(arg[1]), ft_lstnew(save->content));
	rr = arg[1];
	arg[1] = ft_lstlast(arg[1]);
	save = arg[1]->back;
	ft_lstdelone(arg[1], delete_mem);
	arg[1] = save;
	arg[1]->next = NULL;
	arg[1] = rr;
	ft_printf("rrb\n");
	return (arg);
}

t_list	**rrr(t_list **arg)
{
	arg = rra(arg);
	arg = rrb(arg);
	ft_printf("rrr\n");
	return (arg);
}
