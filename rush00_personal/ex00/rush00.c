/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <trngo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:23:43 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/30 14:17:56 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void rush(int x, int y){

	// y is the row count
// (i, j)
	for (int i = 1; i < y+1; i++){ // y coordinates
// x is the column count
		for (int j = 1; j < x+1; j++) // x coordinates
		{

			// The first row line 25 to 32 -> o-----0

			if ((i == 1) && (j == 1)){ // top left (1,1)
				ft_putchar('o');
				// on first row (i == 1) increase j until it's less than x (j (count), 1)
			} else if ((i == 1) && (j > 1) && (j < x)){ // top middle
					ft_putchar('-');
					// on first row (i == 1) when count equals x print o (x,1)
				} else if ((i == 1) && (j == x)){ // top right
						ft_putchar('o');
						// goes onto next row
						printf("\n");


					} else if ((i > 1) && (i < y) && (j == 1)){ //middle left
							ft_putchar('|');
						} else if ((i > 1) && (i < y) && (j > 1) && (j < x)) { // middle middle
								ft_putchar(' ');
							} else if ((i > 1) && (i < y) && (j == x)){ // middle right
									ft_putchar('|');
									printf("\n");


								// The last row line 47 to 54
								} else if ((i == y) && (j == 1)){ //bottom left (1,y)
									ft_putchar('o');
								} else if ((i == y) && (j > 1) && (j < x)){ // bottom middle
									ft_putchar('-');
								} else if ((i == y) && (j == x)){ // bottom right (x,y)
									ft_putchar('o');
								} else{
								printf("\n"); // end of program newline
								}
						}
					}

				}
