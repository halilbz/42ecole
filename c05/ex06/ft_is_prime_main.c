#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb <=== 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int main(void)
{	int	a;
	a = 1;
	printf("%d : ",ft_is_prime(a));
}
