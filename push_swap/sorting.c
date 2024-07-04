/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:10:28 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 14:31:41 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**back_home(t_list *copy_arg, t_list **arg, int reg)
{
	int		opti;

	opti = 0;
	while (ft_digitsingle(copy_arg->base, reg) != 1)
	{
		copy_arg = copy_arg->next;
		opti++;
	}
	while (((char *)(arg[0]->content)) != (char *)(copy_arg->content))
		arg = opti_move(arg, opti);
	while (arg[1] != NULL)
		arg = opti_pa(arg);
	return (arg);
}

char	*compare(t_list *arg, int reg, int after)
{
	int		to_after;
	int		single;
	t_list	*save;

	to_after = 0;
	save = arg;
	if (arg == NULL || save == NULL)
		return (NULL);
	while (save != NULL)
	{
		single = single_int((save->base), reg);
		if (single == 0)
			if (to_after++ == after)
				return ((char *)(save->content));
		save = save->next;
	}
	return (NULL);
}

t_list	**sort(t_list **arg, char *pos)
{
	int		opti;
	t_list	*save;

	opti = 0;
	save = arg[0];
	while ((char *)(save->content) != pos)
	{
		save = save->next;
		opti++;
	}
	while ((char *)(arg[0]->content) != pos)
		arg = opti_move(arg, opti);
	opti_pb(arg);
	return (arg);
}
