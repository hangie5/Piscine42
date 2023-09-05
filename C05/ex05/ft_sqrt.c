#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	a = 0;
	while (a * a < nb && a < 46341)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}


int	main(void)
{
    printf("%d\n", ft_sqrt(2147395600));
    return(0);
}
