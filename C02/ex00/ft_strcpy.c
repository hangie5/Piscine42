/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 15:17:22 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/05 16:46:35 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	string[10] = "Helloguys";
	char	string2[10];
	char	*ptr;
	char	*ptr2;

	ptr = string;
	ptr2 = string2;
	printf("%s", ft_strcpy(ptr2, ptr));
}
*/