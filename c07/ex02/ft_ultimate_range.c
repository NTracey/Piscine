/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:56:56 by trngo             #+#    #+#             */
/*   Updated: 2022/12/14 20:14:25 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*arr;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	index = 0;
	while (max > min)
	{
		arr[index] = min;
		min++;
		index++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int *arr;
	int	size = ft_ultimate_range(&arr, 2, 10);
	int index = 0;
	while (index < size)
	{
		printf("%d", arr[index]);
		index++;
	}
	printf("\n%d", size);
}
*/
