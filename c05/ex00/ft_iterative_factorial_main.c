#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	
	result = 1;
	if (nb >= 0)
	{
		if (nb == 0)
			return (1);
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
	printf("Result : %d\n",ft_iterative_factorial(-5));
}
