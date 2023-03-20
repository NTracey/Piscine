/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <trngo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:25:07 by trngo             #+#    #+#             */
/*   Updated: 2022/11/28 20:31:07 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(int first_c, int second_c, int third_c)
{
	char	a;
	char	b;
	char	c;

	a = first_c + '0';
	b = second_c + '0';
	c = third_c + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	comma(int first_c, int second_c, int third_c)
{
	if (first_c != 7 || second_c != 8 || third_c != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	first_c;
	int	second_c;
	int	third_c;

	first_c = 0;
	second_c = 1;
	third_c = 2;
	while (first_c <= 9)
	{
		second_c = first_c + 1;
		while (second_c <= 9)
		{
			third_c = second_c + 1;
			while (third_c <= 9)
			{
				print_char(first_c, second_c, third_c);
				comma(first_c, second_c, third_c);
				third_c++;
			}
			second_c++;
		}
		first_c++;
	}
}

/*
int main(void)
{
    ft_print_comb();
    return (0);
}
*/
