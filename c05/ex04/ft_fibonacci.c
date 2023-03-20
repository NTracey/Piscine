/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:26:22 by trngo             #+#    #+#             */
/*   Updated: 2022/12/14 12:23:20 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("fibonacci of 9: %d\n", ft_fibonacci(9));
	printf("fibonacci of -2: %d\n", ft_fibonacci(-2));
	printf("fibonacci of 0: %d\n", ft_fibonacci(0));
	return (0);
}
*/
