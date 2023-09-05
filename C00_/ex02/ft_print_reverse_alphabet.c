/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/21 15:53:17 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/30 19:00:05 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count; 

	count = 'z'; //set count value to ASCII value 'z'
	while (count >= 'a') //loop to print 'z' to 'a'
	{
		write(1, &count, 1); //while count(which is 'z') is greater than or same as 'a', write count
		count--; //move to previous character in the sequence, move to previous character until 'a' is reached.
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
//expected output: zyxwvutsrqponmlkjihgfedcba%
