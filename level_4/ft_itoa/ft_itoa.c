#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	int n2 = n;
	int len = 0;
	int k = 0;
	char *res;
	if ( n == -2147483648)
		return ("-2147483648\0");
	if (n == 0)
		return ("0\0");
	if (n2 < 0)
		len++;
	while (n2)
	{
		len++;
		n2 /= 10;
	}
	res = (char *) malloc( len + 1);
	res[len] = 0;
	if (!res)
		return (0);
	if (n < 0)
	{
		res[0] = '-'; 
		n = -n;
	}
	while (n)
	{
		res[--len] = n % 10 + 48;
		n /= 10;
	}
return (res);
}
