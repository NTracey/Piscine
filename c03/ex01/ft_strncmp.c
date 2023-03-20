/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:42:52 by trngo             #+#    #+#             */
/*   Updated: 2022/12/10 19:58:29 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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
	result = ft_strncmp(str1, str2, 3);
	printf("Results for one differences = %d\n", result);
	result = ft_strncmp(str1, str2, 2);
 	printf("Results for no differences = %d\n", result);
}
*/
