#include <unistd.h>

void putnbr(int n)
{
	char *digits= "0123456789";

	if (n > 9)
		putnbr(n / 10);
	write(1, &digits[n % 10],1);
}

int main()
{	
	int n = 1;
	while ( n <= 100)
	{
		if ( n % 15 == 0)
			write(1,"fizzbuzz",8);
		else if (n % 5 == 0)
			write(1,"buzz", 4);
		else if (n % 3 == 0)
			write(1,"fizz", 4);
		else
			putnbr(n);
		write(1,"\n",1);
		n++;
	}
}
