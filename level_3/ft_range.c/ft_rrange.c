#include <stdio.h>
#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}


int	*ft_range(int start, int end)
{
	int i = 0;
	int *res;
	res = (int *)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		res[i] = start;
		start++;
		i++;
	}
	res[i] = start;

	while (start > end)
	{
		res[i] = start;
		start--;
		i++;
	}
	res[i] = start;
	return (res);
}

int main()
{
 	int *tab = ft_range(0,-3);
	int len = 4;
	int i = 0;
	while( i < len)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
