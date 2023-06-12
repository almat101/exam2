#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (*s2)
	{
		*s1++ = *s2++;
	}
	*s1 = 0;
	
	return (s1);
}

int main()
{
	char *s = "pippo";
	char d[10];
	ft_strcpy(d,s);
	printf("%s",d);
} 
