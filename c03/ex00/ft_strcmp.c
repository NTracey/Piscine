/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:44:44 by trngo             #+#    #+#             */
/*   Updated: 2022/12/09 19:27:03 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int result;

	char str1[] = "abcd";
	char str2[] = "abCd";
	char str3[] = "abcd";	
	result = ft_strcmp(str1, str2);
	printf("Result: %d\n", result);
	result = ft_strcmp(str1, str3);
 	printf("Result: %d\n", result);
}
*/
