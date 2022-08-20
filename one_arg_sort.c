/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_arg_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:36:31 by isalgar           #+#    #+#             */
/*   Updated: 2022/08/18 20:36:33 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_arg(t_swap *index)
{
	if (index->a_len == 1)
	{
		write(2, "Error\n", 6);
		exit_swap(index);
	}
}
