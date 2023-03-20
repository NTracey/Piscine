/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:20:21 by trngo             #+#    #+#             */
/*   Updated: 2022/12/13 17:34:56 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	str;

	str = 0;
	while (argc && argv[0][str] != '\0')
	{
		ft_putchar(argv[0][str]);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
