/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:28:14 by trngo             #+#    #+#             */
/*   Updated: 2022/12/10 17:14:09 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
			result = result * nb;
			i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("2^-3 = %d\n", ft_iterative_power(2, -3));
	printf("2^0 = %d\n", ft_iterative_power(2, 0));
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	return (0);
}
*/
