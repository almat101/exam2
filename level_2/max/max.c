#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int temp;
	int i;

	i = 0;
	temp = 0;
	while( i <= len)
	{	
		if (tab[i] >= temp)
			temp = tab[i];
		i++;
	}
	return (temp);
}

