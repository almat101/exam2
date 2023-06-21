#include <stdio.h>

int	ft_atoi(char *s)
{
	int res = 0;
	int sign = 1;

	while(*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - 48;
		s++;
	}
	return (res * sign);
}
