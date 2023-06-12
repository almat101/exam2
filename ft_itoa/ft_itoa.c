#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int count;
	int nbr2;
	char *res;

	nbr2 = nbr;
	count = 0;

	if (nbr2 <= 0)
		count++;

	while (nbr2)
	{
		nbr2 = nbr2 / 10;
		count++;
	}

	res = (char *)malloc(count + 1);
	if (!res)
		return (NULL);
	res[count]= 0;
	if ( nbr == 0)
	{
		res[0] = '0';
		return res;
	}
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			res[0]= '-';
			res[1]= '2';
			nbr = 147483648;
		}
		else
		{
			res[0] = '-';
			nbr = -nbr;
		}
	}	
	while(nbr)
	{
		res[--count] = nbr % 10 + 48;
		nbr /= 10;
	}

	return res;
}
