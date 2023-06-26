#include <stdio.h>

int ft_strchr(const char *s1, char c)
{
	int i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
	i++;
	}
	return (0);
}

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t  i = 0;

	while (s[i])
	{
		if (ft_strchr(reject,s[i]) == 1)
			return (i);
		i++;
	}
	return (i);
}

int main ()
{
  
   const char str1[] = "proNO";
   const char str2[] = "NO";


   printf("First matched character is at %zu\n", ft_strcspn(str1,str2));
   
}
