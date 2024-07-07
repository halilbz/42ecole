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
	
