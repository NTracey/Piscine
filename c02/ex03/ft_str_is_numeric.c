/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:16:05 by trngo             #+#    #+#             */
/*   Updated: 2022/12/06 14:43:45 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 48 || str[i] > 57) && !(str[i] == '\0'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int result;

	result = ft_str_is_numeric("asdf");
	printf("Result: %d\n", result);
	result = ft_str_is_numeric("&(*&");
	printf("Result: %d\n", result);
	result = ft_str_is_numeric("");
	printf("Result: %d\n", result);
	result = ft_str_is_numeric("123");
	printf("Result: %d\n", result);
	return (0);
}
*/
