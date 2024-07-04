/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:03:52 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 18:04:23 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**pa(t_list **arg)
{
	t_list	*save;

	if (arg[1] == NULL)
		return (arg);
	ft_lstadd_front(&(arg[0]), ft_lstnew(arg[1]->content));
	if (ft_lstsize(arg[1]) == 1)
	{
		ft_lstclear(&arg[1], delete_mem);
		arg[1] = NULL;
		ft_printf("pa\n");
		return (arg);
	}
	else
	{
		save = arg[1]->next;
		ft_lstdelone(arg[1], delete_mem);
		arg[1] = save;
		arg[1]->back = NULL;
	}
	ft_printf("pa\n");
	return (arg);
}

t_list	**pb(t_list **arg)
{
	t_list	*save;

	if (arg[0] == NULL)
		return (arg);
	ft_lstadd_front(&(arg[1]), ft_lstnew(arg[0]->content));
	if (ft_lstsize(arg[0]) == 1)
	{
		ft_lstclear(&arg[0], delete_mem);
		arg[0] = NULL;
		ft_printf("pb\n");
		return (arg);
	}
	else
	{
		save = arg[0]->next;
		ft_lstdelone(arg[0], delete_mem);
		arg[0] = save;
		arg[0]->back = NULL;
	}
	ft_printf("pb\n");
	return (arg);
}
