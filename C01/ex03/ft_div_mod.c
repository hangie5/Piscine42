/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 14:29:45 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/29 15:42:46 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int    main(void)

{
	int    a = 5;
	int    b = 2;
	int    result;
	int    remainder;

	ft_div_mod(a, b, &result, &remainder);
	printf("result of div: %d\n", result);
	printf("remainder of mod: %d\n", remainder);
	return (0);
}
*/