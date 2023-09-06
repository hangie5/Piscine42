/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 13:30:07 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/06 13:49:03 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    printf("%d\n", ft_recursive_power(5, -10));
    return(0);
}
*/