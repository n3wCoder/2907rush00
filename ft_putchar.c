/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CHRISTOPHER OOI <cooi@student.42singa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:32:02 by CHRISTOPH         #+#    #+#             */
/*   Updated: 2023/07/29 11:34:19 by CHRISTOPH        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/* this is the write function in which the first 1 means the file descriptor variable which represents a file or 
Input/Output stream which in this case is output to the terminal. 
It requires the address of the variable c to be passed in, 
and the last 1 is the size of the bytes to be written */
