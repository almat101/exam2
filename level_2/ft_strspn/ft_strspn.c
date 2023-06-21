#include <stdio.h>

int	ft_strchr(const char *s1, char c)
{
	while (*s1)
	{
		if (*s1 == c)
			return (1);
		s1++;
	}
	return (0);
}



size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while (s[i])
	{
		if (ft_strchr(accept,s[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

int  main ()
{

	char *s = "porco zio can";
	char *a = "orcop izo";

	printf(" %zu", ft_strspn(s,a)); 
}
