/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:49:10 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/20 16:30:03 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/includes/ft_printf.h"
# include "libft/includes/get_next_line.h"
# include "libft/includes/libft.h"

t_list	**sa(t_list **arg);

t_list	**sb(t_list **arg);

t_list	**ss(t_list **arg);

t_list	**pa(t_list **arg);

t_list	**pb(t_list **arg);

t_list	**ra(t_list **arg);

t_list	**rb(t_list **arg);

t_list	**rr(t_list **arg);

t_list	**rra(t_list **arg);

t_list	**rrb(t_list **arg);

t_list	**rrr(t_list **arg);

int		ft_next_lst_printf(t_list *l);

int		ft_back_lst_printf(t_list *l);

int		ft_next_back_printf(t_list *l);

void	delete_mem(void *ptr);

int		find_biggest(t_list *arg);

int		find_lowest(t_list *arg);

t_list	**push_swap(t_list **arg);

t_list	**push_swap_for_under_3(t_list **arg);

t_list	**push_swap_for_4(t_list **arg);

t_list	**push_swap_for_5(t_list **arg);

int		orded(t_list *arg);

t_list	*list_copy(t_list *arg);

t_list	**perfect_radix_sort(t_list **arg);

t_list	**back_home(t_list *copy_arg, t_list **arg, int reg);

char	*compare(t_list *arg, int reg, int after);

t_list	**sort(t_list **arg, char *pos);

t_list	**opti_pb(t_list **arg);

t_list	**opti_pa(t_list **arg);

t_list	**opti_ra(t_list **arg);

t_list	**opti_rra(t_list **arg);

t_list	**opti_move(t_list **arg, int opti);

int		ft_pow(int num, int power);

int		ft_digitlen(int digit);

int		ft_digitsingle(int digit, int reg);

int		single_int(int save, int reg);

int		find_lowest_radix(t_list *arg);

t_list	*convert_to_base_two_number(t_list *arg);

t_list	*convert_to_tiny_number(t_list *arg);

long	ft_long_atoi(char *str);

int		finder(char *s);

char	**ft_free_all(char **split);

char	**return_error(void);

long	see_max_min(char *argv);

int		twins(int argc, char **argv);

t_list	*ft_convert(t_list *arg);

#endif