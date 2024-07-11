#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;
	
	result = 0;
	if (nb >= 0)
	{
		if (nb == 0)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}

int main(void)
{
	printf("Result : %d\n",ft_recursive_factorial(-4));
}
