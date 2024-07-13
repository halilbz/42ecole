#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int 	result;
	
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power--;	
		}
		return (result);
	}	
}

int main(void)
{
	printf("Result : %d\n",ft_iterative_power(0,0));
}
