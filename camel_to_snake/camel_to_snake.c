#include <unistd.h>

void	camel_to_snake(char *s)
{
	while(*s)
	{
		if( *s >= 'A' && *s <= 'Z')
		{
			*s = *s + 32;
			write(1, "_", 1);
		}
		write(1, s, 1);
		s++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 2)
		camel_to_snake(av[1]);
	write(1, "\n", 1);
}
