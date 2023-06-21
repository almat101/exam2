#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char bit;
	i = 8;
	while (i--)
	{
	
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
	}
}

int main()
{
	print_bits(7);
}
