#include <unistd.h>


void	first(char *s)
{
	while (*s <= 32)
		s++;
	while (*s > 32 )
		write(1,s++,1);
}



int main(int ac, char **av)
{
	if (ac == 2)
		first(av[1]);
	write(1, "\n", 1);
}
