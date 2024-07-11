#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			i++;
		}
		
	}
	return(s1[i] - s2[i]);
}
int main(void)
{
	char s1[] = "hello kanka";
	char s2[]="hello";
	int result;

	result = ft_strcmp(s1, s2);
	if (result > 0)
		printf("%s daha büyük %s dan",s1,s2);

	else if (result < 0) 
                printf("%s daha küçük %s dan",s1,s2);
	else
		printf("%s ile  %s eşittir",s1,s2);
}

