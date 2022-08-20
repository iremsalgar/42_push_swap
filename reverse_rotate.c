/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:38:03 by isalgar           #+#    #+#             */
/*   Updated: 2022/08/18 20:39:04 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_swap *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_swap *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rrb\n", 4);
}

void	reverse_rotate_r(t_swap *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rrr\n", 4);
}
