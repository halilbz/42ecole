#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int result;
	result = *a;
	*a = *a / *b;
	*b = result % *b;
}

int	main(void)
{
	int 	a;
	int	b;
	a = 25;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Bölüm : %d\n",a);
	printf("Kalan : %d\n",b);
}
