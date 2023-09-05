/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/21 12:42:55 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/30 18:59:38 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_alphabet(void)
{
	char	count; //initialize 'count', char only deals with ASCII numbers.

	count = 97; //set 'count' to ASCII value 'a'
	while (count >= 97 && count <= 122) //loop to print characters 'a' to 'z'.
		//while functon: count is greater or same as ASCII 97
		//&& = the logical and OPERATON
		//count is msalleror the same as ASCII 122
	{
		write(1, &count, 1); //write according to the while function you just wrote.
		count++; //move to the next character in sequence.
	}
}

int	main(void)
{ 
	ft_print_alphabet();
	return (0);
}
//expected output: abcdefghijklmnopqrstuvwxyz%
