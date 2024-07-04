/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:57:19 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 18:22:56 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*list_copy(t_list *arg)
{
	t_list	*arg_copy;
	t_list	*save_copy;
	t_list	*save;

	if (!arg)
		return (NULL);
	save = arg;
	arg_copy = ft_lstnew(save->content);
	save_copy = arg_copy;
	save_copy->base = save->base;
	save_copy->value = save->value;
	save = save->next;
	while (save != NULL)
	{
		ft_lstadd_back(&arg_copy, ft_lstnew(save->content));
		save_copy = save_copy->next;
		save_copy->base = save->base;
		save_copy->value = save->value;
		save = save->next;
	}
	return (arg_copy);
}

int	orded(t_list *arg)
{
	char	*before;
	char	*after;
	t_list	*lstafter;
	t_list	*save;

	save = arg;
	lstafter = arg;
	while (lstafter != NULL)
	{
		before = (char *)(arg->content);
		lstafter = lstafter->next;
		if (lstafter == NULL)
			break ;
		after = (char *)(lstafter->content);
		if (ft_atoi(before) > ft_atoi(after))
		{
			arg = save;
			return (-1);
		}
		arg = arg->next;
	}
	arg = save;
	return (1);
}

void	delete_mem(void *ptr)
{
	if (ptr != NULL)
		ptr = NULL;
}
