#include <unistd.h>

void	alpha_mirror(char *s)
{
	while(*s)
	{
		if (*s >= 65 && *s <= 90)
			*s = 90 - *s + 65;
		else if (*s >= 97 && *s <= 122)
			*s = 122 - *s + 97;
		write(1, s,1);
		s++;	
	}

}

int main (int ac, char **av)
{
	int i = 0;
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
}
