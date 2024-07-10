#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}

int main(void)
{
	char str[] = "KADER BIZE YAMUK YAPTİ usta";
	printf("Orj Result : %s\n",str);
	printf("Lower Result : %s\n",ft_strlowcase(str));
}
