/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:48:07 by trngo             #+#    #+#             */
/*   Updated: 2022/12/11 19:16:33 by trngo            ###   ########.fr       */
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
	int	index;

	index = 1;
	while (index < argc)
	{
		str = 0;
		while (argc && argv[index][str] != '\0')
		{
			ft_putchar(argv[index][str]);
			str++;
		}
		ft_putchar('\n');
		index++;
	}
	return (0);
}
