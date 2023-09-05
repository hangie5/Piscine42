#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		result = 1;
	if (power < 0)
		result = 0;
	if (power == 1)
		result = nb;
	while (power > 1)
	{
		result *= nb;
		power --;
	}
	return (result);
}

int main (void)
{
    printf("%d\n", ft_iterative_power(2, 11));
    return(0);
}