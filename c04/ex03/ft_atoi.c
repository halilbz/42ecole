#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int	i;
	int	result;
	int	isaret;
	
	isaret=1;
	i = 0;
	result = 0;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	{//boşluk karekterleri varsa atla diyorum ascii ye göre
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			isaret *= -1; 
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{//sayısal değer aralığında ise 48 çıkar ascii karşılığından daha sonra sonucu 10 la çarp gelen karekterle topla.
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (result * isaret);
}

int main(void)
{
	char str[]="  -+1678--";
	printf("Result : %d\n", ft_atoi(str));
}
