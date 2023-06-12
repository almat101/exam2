#include <stdio.h>
#include <stdlib.h>

int ft_abs( int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int *res;

	res = (int *)malloc(sizeof(int) * ft_abs(end - start):q + 1); 

	while (start < end )
	{
		res[i] = end;
		end--;
		i++;
	}
	res[i] = end;

	while (start > end )
	{
		res[i] = end;
		end++;
		i++;
	}
	res[i] = end;
	return (res);
}


int main()
{
	int *tab = ft_rrange(-1,3);
	int len =5;
	int i = 0;
	while ( i < len)
	{
		printf("%d ", tab[i]);
		i++;
	}

}
