/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 14:58:27 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/05 14:58:28 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src [j]; 
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main()
{
	char src[] = "bruh";
	char dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 7));
}
*/
