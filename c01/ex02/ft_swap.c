/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:20:49 by trngo             #+#    #+#             */
/*   Updated: 2022/11/30 17:45:12 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int x = 4;
	int y = 2;

	int *a = &x;
	int *b = &y;
	ft_swap(a, b);
	printf("x has changed from 4 to: %d \n", x);
	printf("y has changed from 2 to: %d \n", y);
	return (0);
}
*/
