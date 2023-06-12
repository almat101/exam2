#include <stdio.h>

int ft_atoi(const char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == 32 || ( *s >= 9 && *s <= 13 ))
		s++;
	if ( *s == '-')
	{
		sign *= -1;
		s++;
	}
	if ( *s == '+')
		s++;
	while ( *s >= 48 && *s <= 57)
	{
		result = result * 10 + *s - 48;
		s++;
	}
	return (result * sign);
}

int main()
{
	printf("%d",ft_atoi("-42"));
}
