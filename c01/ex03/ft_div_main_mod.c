#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	
	*div = a / b;
	*mod = a % b;
	printf("Bölüm : %d\n", *div);
	printf("Kalan mod : %d\n",*mod);
}

int	main(void)
{
	int a;
	int b;
	
	a = 25;
	b = 0;
	
	ft_div_mod(a,b,&a,&b);
}
