/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:42:18 by trngo             #+#    #+#             */
/*   Updated: 2022/12/15 18:48:06 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	if (arr == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (min < max)
	{
		arr[index] = min;
		index++;
		min++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int index = 0;
	int *arr = ft_range(1, 10);
	while (arr[index] != '\0')
	{
		printf("%d ", arr[index]);
		index++;	
	}
	return (0);
}
*/
