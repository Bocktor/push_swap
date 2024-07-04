/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:03:55 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 16:26:43 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**give_me_my_lst(int argc, char **argv)
{
	int	i;
	int	y;

	if (argc < 2)
		return (NULL);
	i = 0;
	while (argv[i++])
		if (see_max_min(argv[i]) == -1)
			return (return_error());
	i = 1;
	while (argv[i])
		if (finder(argv[i++]) == (-1))
			return (return_error());
	if (argc == 2)
	{
		y = 0;
		argv = ft_split(argv[1], ' ');
		if (argv[0] == NULL)
			(return_error());
	}
	if (twins(argc, argv) == -1)
		return (return_error());
	return (argv);
}

int	main(int argc, char **argv)
{
	t_list	**stack;
	int		i;

	i = 0;
	argv = give_me_my_lst(argc, argv);
	if (!argv)
		return (-1);
	stack = malloc(sizeof(t_list **) * 2);
	if (!stack)
		return (-1);
	if (argc != 2)
		i++;
	stack[0] = ft_lstnew(argv[i++]);
	while (argv[i])
		ft_lstadd_back(&stack[0], ft_lstnew(argv[i++]));
	stack[1] = NULL;
	stack[0] = ft_convert(stack[0]);
	stack = push_swap(stack);
	if (!stack)
		return (-1);
	ft_lstclear(&stack[0], delete_mem);
	ft_lstclear(&stack[1], delete_mem);
	if (argc == 2)
		ft_free_all(argv);
	free(stack);
}
