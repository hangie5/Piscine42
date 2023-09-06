/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 13:29:44 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/06 13:48:29 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else 
		return (0);
}

/*int	main(void)
{
    printf( "%d\n", ft_iterative_factorial(10));
    return(0);
}
*/