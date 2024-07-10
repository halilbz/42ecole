#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int 	i;

	i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			{
				
				str[i] -=  32;
			}
			i++;
	}
	return (str);
}

int main (void)
{
	
	char str[] = "0sen kendini ne sanirsiN ibrahim";
	//char *str; bu şekilde bir tanımlama yaparsan c bunu const algılıyor ve metin üzerinde değişiklik yapamıyorsun.
	//str = "sen kendini ne sanirsiN ibrahim";
	printf("Orj Result : %s\n",str);
	printf("Upper Result : %s\n",ft_strupcase(str));
}
