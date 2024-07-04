/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perfect_radix_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:53:17 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 14:27:15 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**perfect_radix_sort(t_list **arg)
{
	int		reg;
	int		after;
	t_list	*copy_arg;
	char	*pos;

	reg = 0;
	after = 0;
	while (orded(arg[0]) != 1)
	{
		copy_arg = list_copy(arg[0]);
		while (compare(copy_arg, reg, after) != NULL)
		{
			pos = compare(copy_arg, reg, after);
			arg = sort(arg, pos);
			after++;
		}
		after = 0;
		arg = back_home(copy_arg, arg, reg);
		ft_lstclear(&copy_arg, delete_mem);
		copy_arg = NULL;
		reg++;
	}
	return (arg);
}
