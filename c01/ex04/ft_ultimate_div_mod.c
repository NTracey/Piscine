/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:33:36 by trngo             #+#    #+#             */
/*   Updated: 2022/11/30 22:22:38 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 7;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("Division: %d\n", a);
	printf("Remainder: %d\n", b);
	return (0);
}
*/
