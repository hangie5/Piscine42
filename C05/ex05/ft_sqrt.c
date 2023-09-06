/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 13:30:28 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/06 14:29:43 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	a = 0;
	while (a * a < nb && a < 888)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}

/*int	main(void)
{
    printf("%d\n", ft_sqrt(788544));
    return(0);
}
*/