/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 20:52:50 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/06 21:59:09 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int			i;
	int			len;
	char		*c;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	len = i;
	c = (char *)malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

// int main(void)
// {
// 	char text1[] = "goodmorning";
// 	printf("%s\n", ft_strdup(text1));
// }
