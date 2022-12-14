/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_arg_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:35:27 by isalgar           #+#    #+#             */
/*   Updated: 2022/08/18 20:35:30 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	finder(t_swap	*index)
{
	int	i;

	i = 1;
	while (i)
	{
		if (index->a_len == 4 && index->b_len == 1)
		{
			if (index->stack_a[index->a_len - i] == 1)
				return (i);
		}
		if (index->a_len == 4 && index->b_len == 0)
		{
			if (index->stack_a[index->a_len - i] == 0)
				return (i);
		}
		++i;
	}
	return (0);
}

void	four_sort_in(t_swap *index, int i, int place)
{
	int	val;

	val = 0;
	if (index->b_len > 0)
		val = 1;
	while (i < index->a_len)
	{
		if (index->stack_a[index->a_len - 1] == val)
		{
			push_b(index);
			three_sort(index);
			push_a(index);
			break ;
		}
		++i;
		if (place <= 2)
			rotate_a(index);
		else
			reverse_rotate_a(index);
	}
}

void	four_sort(t_swap *index)
{
	int	i;
	int	place;

	i = 0;
	place = finder(index);
	four_sort_in(index, i, place);
	if (index->b_len == 0)
		exit_swap(index);
}
