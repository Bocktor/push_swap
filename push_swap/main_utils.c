/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:26:54 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 16:36:46 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	finder(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((!(s[i] >= '0' && s[i] <= '9')) && s[i] != ' ' && s[i] != '-')
			return (-1);
		if (s[i] == '-' && (!(s[i + 1] >= '0' && s[i + 1] <= '9')))
			return (-1);
		if ((s[i] >= '0' && s[i] <= '9') && (s[i + 1] == '-'))
			return (-1);
		i++;
	}
	return (1);
}

char	**ft_free_all(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	while (i >= 0)
	{
		free(split[i]);
		split[i] = NULL;
		i--;
	}
	free(split);
	return (NULL);
}

char	**return_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (NULL);
}

long	see_max_min(char *argv)
{
	long	x;
	long	z;
	long	u;

	x = ft_long_atoi(argv);
	z = 2147483647;
	u = -2147483648;
	if ((x < u) || (x > z))
		return (-1);
	else
		return (1);
}

int	twins(int argc, char **argv)
{
	int		i;
	int		y;
	char	*save;

	if (argc == 2)
		y = 0;
	else
		y = 1;
	while (argv[y])
	{
		save = argv[y];
		if (argc == 2)
			i = 0;
		else
			i = 1;
		while (argv[i])
			if (ft_atoi(argv[i++]) == ft_atoi(save) && (i - 1) != y)
				return (-1);
		y++;
	}
	return (0);
}
