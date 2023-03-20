/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:14:28 by trngo             #+#    #+#             */
/*   Updated: 2022/12/06 15:33:54 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] > 127) && !(str[i] == '\0'))
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
	printf("Results: %d\n", ft_str_is_printable("a1$"));
	printf("Results: %d\n", ft_str_is_printable(""));
	printf("Results: %d\n", ft_str_is_printable("\n"));
}
*/
