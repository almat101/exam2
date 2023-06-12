#include <stdio.h>

void ft_swap(char *a, char *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	
}

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i);
}

char *ft_strrev(char *s)
{
	int i = 0;
	int j = ft_strlen(s) - 1;
	int len = ft_strlen(s);

	while(s[i] && (len / 2) > i)
	{		
		ft_swap(&s[i],&s[j]);
		i++;
		j--;
	}

	return (s);
}

int main()
{
	char s[]="ciaomondoladro";
	printf("%s",ft_strrev(s));
}
