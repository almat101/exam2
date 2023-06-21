#include <stdlib.h>
#include <stdio.h>

int ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

int     *ft_range(int start, int end)
{
	int i = 0;
	int *res;

	res = (int *)malloc(sizeof(int) * ft_abs(end - start) + 1);

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

//int main()
//{
//	int *res = ft_range(0,-3);
//	int i = 0;
//	while ( i < 4)
//	{
//		printf("%d ", res[i]);
//		i++;
//	}
//}
