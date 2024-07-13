#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;
	
	result = 0;
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
	result++;
	}
	return (0);
}

int main(void)
{
	printf("%d sayısının karekökü : %d\n",-1,ft_sqrt(-1));
}
