/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 20:44:39 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/06 21:59:07 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*table;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	table = (int *)malloc(sizeof(*table) * (max - min));
	if (!table)
		return (-1);
	i = 0;
	while (min < max)
	{
		table[i] = min;
		i++;
		min++;
	}
	*range = table;
	return (i);
}

// int		main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	size;
// 	int	i = 0;

// 	min = 0;
// 	max = 9;
// 	size = ft_ultimate_range(&tab, min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
