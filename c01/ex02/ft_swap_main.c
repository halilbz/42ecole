#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{

	printf("before a: %d\n",*a);
	printf("before b: %d\n\n",*b);
	int 	swap;
	swap = *a;
	*a = *b;
	*b = swap;
	
}

int	main(void)
{
	int a = 10;
	int b = 5;
	ft_swap(&a, &b);
	printf("after a : %d\n", a);
	printf("after b : %d\n", b);
}
