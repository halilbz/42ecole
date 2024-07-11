#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	
	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while(str[i])
	{
		a = 0;
		while(str[i + a] == to_find[a])
		{	
			if (to_find[a + 1] == '\0')
			{
				return (&str[i]);
			}
			a++;
		}
		i++;	
	}
	return (0);
}

int main(void)
{
	char str[]="seni kalbimden silemedim";
	char to_find[]="k";

	printf("%s : ", ft_strstr(str, to_find));
}
