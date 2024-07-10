#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if(i == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}	
		if ((str[i] >= 32 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96))
		{
			i++;
			if(str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				i--;
			}	
		}
		i++;
		
	}
	return (str);
}

int main (void)
{
	char str[] = "Saluti comment tu vas ?-_  mots quaran-felix; cinema+kalp-ciğer";
	printf("Orj Result :  %s\n\n",str);
	printf("Upper Result : %s\n\n",ft_strcapitalize(str));
}
