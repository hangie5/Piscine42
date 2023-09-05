/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 14:49:09 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/05 14:49:11 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	printf("%d", ft_strcmp("bruh", "bruh1"));
	printf("\n%d", ft_strcmp("bruh", "br"));
	printf("\n%d", ft_strcmp("br", "bruh"));
	printf("\n%d", ft_strcmp("bruh", "bruh"));
}
*/