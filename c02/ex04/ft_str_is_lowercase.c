/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:42:35 by trngo             #+#    #+#             */
/*   Updated: 2022/12/06 15:03:58 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && !(str[i] == '\0'))
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
	int	result;

	result = ft_str_is_lowercase("abc");
	printf("Result: %d\n", result);
	result = ft_str_is_lowercase("");
	printf("Result: %d\n", result);
	result = ft_str_is_lowercase("ABC");
	printf("Result: %d\n", result);
	result = ft_str_is_lowercase("123");
	printf("Result: %d\n", result);
	return (0);
}
*/
