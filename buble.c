/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:34:14 by isalgar           #+#    #+#             */
/*   Updated: 2022/08/18 20:34:18 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bg_sort_min(t_swap *index)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	len = index->a_len;
	while (i < len)
	{
		index->sorted[i] = index->stack_a[i];
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		if (index->sorted[i] > index->sorted[i + 1])
		{
			temp = index->sorted[i];
			index->sorted[i] = index->sorted[i + 1];
			index->sorted[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}
