#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src)
{
        int     i;
	int	a;
	
	a = 0;
        i = 0;
	while (dest[i] != '\0')
	{	
		i++;
		if (dest[i] == '\0')
		{	
			while (src[a] != '\0')
			{
				dest[i] = src[a];
				a++;
				i++;
			}
		}	
	}
	dest[i] = '\0';
	return (dest);
}


int main(void)
{
	char dest[50]="İbrahim Halil ";
	char src[] = "Bozkurt ";
	
//	strcat(dest, src);
//	printf("Original cat : %s\n ",dest);
	printf("Myself func : %s\n ",ft_strcat(dest,src));
}

