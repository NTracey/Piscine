/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <trngo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:13:07 by trngo             #+#    #+#             */
/*   Updated: 2022/11/26 16:58:31 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	number;

	number = 0;
	while (number <= 9)
	{
		ft_putchar(number);
		number++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
