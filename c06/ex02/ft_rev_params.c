/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:40:14 by trngo             #+#    #+#             */
/*   Updated: 2022/12/11 19:15:58 by trngo            ###   ########.fr       */
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

	index = argc - 1;
	while (index < argc && index != 0)
	{
		str = 0;
		while (argc && argv[index][str] != '\0')
		{
			ft_putchar(argv[index][str]);
			str++;
		}
		ft_putchar('\n');
		index--;
	}
	return (0);
}
