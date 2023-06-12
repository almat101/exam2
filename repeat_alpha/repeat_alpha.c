#include <unistd.h>

void ft_putchar_n( char c, int n)
{
	while (n)
	{
		write(1, &c, 1);
		--n;
	}
}

int main (int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar_n(av[1][i], av[1][i] - 'a' + 1);
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar_n(av[1][i], av[1][i] - 'A' + 1);
			else
				write(1, &av[1][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
}
