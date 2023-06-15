#include <unistd.h>

void	snake_to_camel(char *s)
{
	while (*s)
	{
		if( *s == '_')
		{
			s++;
			*s = *s -32;
		}
		write(1, s ,1);
		s++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		snake_to_camel(av[1]);
	write(1, "\n", 1);
}
