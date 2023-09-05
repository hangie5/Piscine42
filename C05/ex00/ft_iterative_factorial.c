#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else 
		return (0);
}

int main(void)
{
    printf( "%d\n", ft_iterative_factorial(10));
    return(0);
}
