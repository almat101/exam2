#include <stdlib.h>
#include <stdio.h>



void	fprime(int n)
{
	if (n == 1)
		printf("1");
	int i = 2;
	
	while (n >= i)
	{
		if ( n % i == 0)
		{
			printf("%d",i);
			if( n !=  i)
				printf("*");
			n /= i;
		}
		else 
			i++;
	}

}



int main(int ac,char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}
