/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:13:53 by hel-hich          #+#    #+#             */
/*   Updated: 2022/02/22 18:13:56 by hel-hich         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_process2(char *call, t_stack *a, t_stack *b)
{
	if (ft_strcmp(call, "ss\n") == 0)
	{
		swap(a, 1);
		swap(b, 1);
	}
	else if (ft_strcmp(call, "rr\n") == 0)
	{
		rotate(a, 1);
		rotate(b, 1);
	}
	else if (ft_strcmp(call, "rrr\n") == 0)
	{
		rev_rotate(a, 1);
		rev_rotate(b, 1);
	}
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return (SUCCESS);
}

int	do_process(char *call, t_stack *a, t_stack *b)
{
	if (ft_strcmp(call, "ra\n") == 0)
		rotate(a, 1);
	else if (ft_strcmp(call, "rra\n") == 0)
		rev_rotate(a, 1);
	else if (ft_strcmp(call, "pa\n") == 0)
		push(b, a, 1);
	else if (ft_strcmp(call, "sa\n") == 0)
		swap(a, 1);
	else if (ft_strcmp(call, "rb\n") == 0)
		rotate(b, 1);
	else if (ft_strcmp(call, "rrb\n") == 0)
		rev_rotate(b, 1);
	else if (ft_strcmp(call, "pb\n") == 0)
		push(a, b, 1);
	else if (ft_strcmp(call, "sb\n") == 0)
		swap(b, 1);
	else
		return (do_process2(call, a, b));
	return (SUCCESS);
}
