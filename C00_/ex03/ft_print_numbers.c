/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 14:31:10 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/30 19:00:22 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count; 

	count = '0'; 
	while (count <= '9')
	{
		write(1, &count, 1); 
		count++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
//expected output: 0123456789%
// this is basically exactly the same as ex01/02 but uses numbers instead of letters.
