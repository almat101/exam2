#include <stdio.h>
#include <stdlib.h>


void	pgcd(int x, int y)
{
	int temp;

	while ( y != 0)
	{
		temp = y;
		y = x % y;
		x = temp;
	}
	printf("%d",temp);
}


int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]),atoi(av[2]));
	printf("\n");
}
