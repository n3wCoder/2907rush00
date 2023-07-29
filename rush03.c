/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CHRISTOPHER OOI <cooi@student.42singa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:35:14 by CHRISTOPH         #+#    #+#             */
/*   Updated: 2023/07/29 16:25:44 by CHRISTOPH        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
/*declaring ft_putchar function*/

void	horizontals(int x)	/*draw horizontal lines(first&last)*/
{
	int	i;		/*initialise column counter*/
	
	ft_putchar('A');	/*draw first character*/
	i = 1;			/*second character position (index 1) */
	if (x > 1)		/*check if no of columns more than 1*/
	{
		while (i < x-1) /*loop from second position to second last
				position*/
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');/*draw C at last character position*/
	}
	ft_putchar('\n');	/*add new-line*/
}

void	verticals(int x)	/*draw vertical lines*/
{
	int	i;
	
	ft_putchar('B');
	i = 1;
	if (x > 1)
	{
		while (i < x-1)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	int	i;

	if (x < 0 || y < 0)	/*negative number check*/
	{
		write(2, "negative numbers!", 17);
		return(1);	/*return error status 1*/
	}
	i = 0;			/*initialise row counter at start position*/
	if (y >= 1 && x >= 1)		
	{
		while (i < y)	/*loop for all rows*/
		{
			if (i == 0 || i == y-1) /*check for first and last row*/
			{
				horizontals(x);
				i++;
			}
			else
			{
				verticals(x);
				i++;
			}
		}
	return(0);
	}
	else
	{
		write(2, "null input", 10);
		return(1);
	}
}
