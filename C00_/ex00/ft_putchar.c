/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <tlin@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/21 12:02:21 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/30 18:59:30 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a) //provides access to functions mainly used for write() functuin
{
	write(1, &a, 1); //write character to standard output. write function; the first "1" is associated with the standard output. 
	//&c is the memory address of the character after char, so in this case it's 'c'.
	//the last "1" stands for the amount of bytes you want to write.
}

int	main(void) //void in int main = no parameters
{
	ft_putchar('a'); //uses the function you just wrote
	return (0); //used to check if the program is executed successfully or not.
}
//expected output = a%
