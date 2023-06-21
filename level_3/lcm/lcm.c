#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int x,unsigned int y)
{
	int i;
	int resx = x;	
	int resy = y;	
	if (x == 0 || y == 0)
		return (0);
	if (x > y)
		i = x;
	else
		i = y;
	while (1)
	{
		if (i % x == 0 && i % y == 0)
			return (i);
		i++;
	}

}


int	main(int ac,char **av)
{
		printf("0 0 = %d\n",lcm(0,0));
		printf("3 6 = %d\n",lcm(3,6));
		printf("80 3 = %d\n",lcm(80,3));
}
