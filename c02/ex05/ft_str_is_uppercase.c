/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:05:20 by trngo             #+#    #+#             */
/*   Updated: 2022/12/06 15:13:15 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && !(str[i] == 0))
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
	printf("Result: %d\n", ft_str_is_uppercase("ABC"));
	printf("Result: %d\n", ft_str_is_uppercase(""));
	printf("Result: %d\n", ft_str_is_uppercase("abc"));
	printf("Result: %d\n", ft_str_is_uppercase("123"));
}
*/
