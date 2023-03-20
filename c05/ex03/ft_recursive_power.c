/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:17:20 by trngo             #+#    #+#             */
/*   Updated: 2022/12/10 17:13:00 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	else
	{
		result = ft_recursive_power(nb, power - 1) * nb;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("2^-3 = %d\n", ft_recursive_power(2, -3));
	printf("2^0 = %d\n", ft_recursive_power(2, 0));
	printf("2^3 = %d\n", ft_recursive_power(2, 3));
	return (0);
}
*/
