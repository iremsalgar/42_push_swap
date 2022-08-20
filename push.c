/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:36:55 by isalgar           #+#    #+#             */
/*   Updated: 2022/08/18 20:36:59 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_swap *index)
{
	if (index->a_len <= 0)
	{
		exit(1);
	}
	index->b_len++;
	index->stack_b[index->b_len - 1] = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = 0;
	index->a_len--;
	write(1, "pb\n", 3);
}

void	push_a(t_swap *index)
{
	if (index->b_len <= 0)
	{
		exit(1);
	}
	index->a_len++;
	index->stack_a[index->a_len - 1] = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = 0;
	index->b_len--;
	write(1, "pa\n", 3);
}
