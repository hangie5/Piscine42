/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 20:58:08 by tlin          #+#    #+#                 */
/*   Updated: 2023/09/06 21:59:06 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		src;
	int		dest;
	int		i;
	int		isep;

	result = (char *)malloc(sizeof(strs));
	dest = 0;
	i = 0;
	while (i < size)
	{
		src = 0;
		while (strs[i][src] != '\0')
			result[dest++] = strs[i][src++];
		isep = 0;
		while (sep[isep] != '\0' && i < size - 1)
			result[dest++] = sep[isep++];
		i++;
	}
	result[dest] = '\0';
	return (result);
}

// int	main(void)
// {
// 	int		i;
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	int	size;

// 	size = 3;
// 	strs = (char **)malloc(3 * sizeof(char *));
// 	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
// 	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
// 	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
// 	strs[0] = "goodmorning";
// 	strs[1] = "xD";
// 	strs[2] = "lolo";
// 	separator = " ";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s$\n", result);
// 	free(result);
// }
