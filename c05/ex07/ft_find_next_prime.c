#include <unistd.h>
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb <= 2)
		return(2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		else
			i++;
			
	}
	return (nb);
}

int main(void)
{
	printf("Result : %d\n",ft_find_next_prime(1000));
}
