/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:13:54 by trngo             #+#    #+#             */
/*   Updated: 2022/12/14 12:27:19 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	answer;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		answer = ft_recursive_factorial(nb - 1) * nb;
	}
	return (answer);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Factorial of 4: %d\n", ft_recursive_factorial(4));
	printf("Factorial of 1: %d\n", ft_recursive_factorial(1));
	printf("Factorial of -4: %d\n", ft_recursive_factorial(-4));
	return (0);
}
*/
