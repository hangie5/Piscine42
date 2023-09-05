/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 14:34:27 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/30 19:00:21 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n) //int n as parameter
{
	if (n < 0) 
		write(1, "N", 1); //write "N" if (n < 0)
	else 
		write(1, "P", 1); //write "P" if the outcome is not (n < 0)
}

int	main(void)
{
	ft_is_negative(5); //call function with positive number
	ft_is_negative(0); //call function with zero
	ft_is_negative(-5); //call function with negative number
	return (0);
}
//expected output: PPN%
