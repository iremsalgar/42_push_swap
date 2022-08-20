/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arg_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:40:03 by isalgar           #+#    #+#             */
/*   Updated: 2022/08/19 16:26:48 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_swap *index)
{
	if (index->stack_a[2] > index->stack_a[1]
		&& index->stack_a[2] > index->stack_a[0])
		rotate_a(index);
	if (index->stack_a[1] > index->stack_a[2]
		&& index->stack_a[1] > index->stack_a[0])
		reverse_rotate_a(index);
	if (index->stack_a[2] > index->stack_a[1])
		swap_a(index);
}
