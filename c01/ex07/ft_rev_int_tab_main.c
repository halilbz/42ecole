#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	ilk;
	int	son;
	int	gec;
	
	ilk  = 0;
	
	son = size - 1;
	while (ilk < size / 2)
	{
		gec = tab[son];
		tab[son] =tab[ilk];
		tab[ilk] = gec;
		ilk++;
		son--;
	}
}

int	main(void)
{
	int tab[]={1,2,3,4,5};
	int size = sizeof(tab) / sizeof(tab[0]);
	printf("size : %d\n", size);
	
	ft_rev_int_tab(tab, size);
	int i =0;
	while (i < size)
	{
		printf("%d ",tab[i]);
		i++;
	}
	
}	
