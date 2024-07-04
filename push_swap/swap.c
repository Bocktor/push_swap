/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:04:42 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 18:04:43 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**sa(t_list **arg)
{
	t_list	*swap_one;
	t_list	*swap_two;

	if (ft_lstsize(arg[0]) <= 1)
		return (arg);
	swap_one = ft_lstnew(arg[0]->content);
	arg[0] = arg[0]->next;
	swap_two = ft_lstnew(arg[0]->content);
	arg[0]->content = swap_one->content;
	arg[0] = arg[0]->back;
	arg[0]->content = swap_two->content;
	ft_lstclear(&swap_one, delete_mem);
	ft_lstclear(&swap_two, delete_mem);
	ft_printf("sa\n");
	return (arg);
}

t_list	**sb(t_list **arg)
{
	t_list	*swap_one;
	t_list	*swap_two;

	if (ft_lstsize(arg[1]) <= 1)
		return (arg);
	swap_one = ft_lstnew(arg[1]->content);
	arg[1] = arg[1]->next;
	swap_two = ft_lstnew(arg[1]->content);
	arg[1]->content = swap_one->content;
	arg[1] = arg[1]->back;
	arg[1]->content = swap_two->content;
	ft_lstclear(&swap_one, delete_mem);
	ft_lstclear(&swap_two, delete_mem);
	ft_printf("sb\n");
	return (arg);
}

t_list	**ss(t_list **arg)
{
	arg = sa(arg);
	arg = sb(arg);
	ft_printf("ss\n");
	return (arg);
}
