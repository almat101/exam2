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

int main()
{
   //initializing char pointers
 //  const char *str1 = "Learn from trytoprogram.com";
  // const char *str2 = "rtyn eaL ofm";
 char str1[] = "geeksforgeeks";
 char str2[] = "kfc";
   //displaying both string
   printf("str1 = %s\n\n", str1);
  printf("str2 = %s\n\n", str2);

   printf("Length of str1 consisting only characters "
          "from str2 = %zu\n", ft_strcspn( str1, str2 ));

 }



