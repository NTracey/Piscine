/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:17:23 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/26 09:30:12 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"
#include "rush02.c"
#include <stdio.h>

int	main()
{
	unsigned int x;
	unsigned int y;

	printf("Please enter x (unsigned int): \n");
	scanf("%u", &x);
	printf("Please enter y (unsigned int): \n");
	scanf("%u", &y);
	rush(x, y);
	return (0);
}
