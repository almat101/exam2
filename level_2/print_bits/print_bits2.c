#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i;
	int bit[8];
	int len = 7;
	
	i = 0;
	while (i < 8)
	{
		bit[len--] = octet % 2 + 48;
		octet = octet / 2;
		i++;

	}
//	i--;
//	while ( i > 0)
//		write(1,&bit[i--],1);
	i = 0;
	while (i < 8)
		write(1, &bit[i++], 1);
	write(1, "\n", 1);
}

int main()
{
	print_bits(9);
	return (0);
}
