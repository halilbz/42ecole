#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{

	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
	printf("Result : %d\n",ft_fibonacci(5));
}
