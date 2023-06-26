
int	ft_char(const char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}


char	*ft_strpbrk(const char *s, const char *accept)
{

	while (*s)
	{
		if (ft_char(*s,accept) == 1)
			return ((char *)s);
		s++;
	}
	return (0);
}


#include <stdio.h>

 int		main(void)
 {
 	printf("ft: %s\n", ft_strpbrk("This is a string to search in", "ZZZ"));

 	printf("ft: %s\n", ft_strpbrk("This is a string to search in", "is"));
 }
