#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main(void)
{
	char s1[]="nedenz";
	char s2[]="nedena";

	printf("Result : %d\n", ft_strncmp(s1, s2, 10));
}
