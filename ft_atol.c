/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:35:47 by isalgar           #+#    #+#             */
/*   Updated: 2022/08/18 20:35:50 by isalgar          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str, t_swap *index)
{
	long int	number;
	long		sign;
	long		i;

	number = 0;
	sign = 1;
	i = 0;
	if (str[i] == '\0')
		exit_swap(index);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		number = (number * 10) + (str[i] - '0') * sign;
		i++;
		if (number > 9223372036854775807)
			return (-1);
		if (number < -9223372036854775807)
			return (0);
	}
	return (number);
}
