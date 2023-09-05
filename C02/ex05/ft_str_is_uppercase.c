/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 15:18:24 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/05 16:03:09 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
       printf("%d", ft_str_is_uppercase("GOODMORNING"));
       printf("\n%d", ft_str_is_uppercase("GOODMORNiNG"));
       printf("\n%d", ft_str_is_uppercase("-GOODmorning._"));
}
*/