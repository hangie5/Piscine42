/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 20:55:26 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/06 21:59:08 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*c;
	int	i;

	if (min >= max)
		return (0);
	c = malloc((max - min) * sizeof(int));
	if (c == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		c[i] = min + i;
		i++;
	}
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	int *c;
// 	int i;
// 	i = 0;
// 	c = ft_range(0, 9);
// 	while (i < 9)
// 	{
// 		printf("%d ", c[i]);
// 		i++;
// 	}
// 	free(c);
// }
