/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:23:43 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/26 09:53:58 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void rush(int x, int y){

	for (int i = 1; i < y+1; i++){ // y coordinates
		for (int j = 1; j < x+1; j++) // x coordinates
		{
			if ((i == 1) && (j == 1)){ // top left
				ft_putchar('/');
				if (j == x) { // enter newline if x is specified as 1
					printf("\n");
				}
			} else if ((i == 1) && (j > 1) && (j < x)){ // top middle
					ft_putchar('*');
				} else if ((i == 1) && (j == x)){ // top right
						ft_putchar('\\');
						printf("\n");
					} else if ((i > 1) && (i < y) && (j == 1)){ //middle left
							ft_putchar('*');
							if (j == x) { // enter newline if x is specified as 1
							printf("\n");
						}
						} else if ((i > 1) && (i < y) && (j > 1) && (j < x)) { // middle middle
								ft_putchar(' ');
							} else if ((i > 1) && (i < y) && (j == x)){ // middle right
									ft_putchar('*');
									printf("\n");
								} else if ((i == y) && (j == 1)){ //bottom left
									ft_putchar('\\');
								} else if ((i == y) && (j > 1) && (j < x)){ // bottom middle
									ft_putchar('*');
								} else if ((i == y) && (j == x)){ // bottom right
									ft_putchar('/');
								} else{
								printf("\n"); // end of program newline
								}
						}
					}

				}
