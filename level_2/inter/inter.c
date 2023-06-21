#include <unistd.h>

int ft_strchr(char *s1, char c)
{
	while (*s1)
	{
		if (*s1 == c)
			return 1;
		s1++;
	}
	return (0);
}


int main (int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		static int seen[256];
		
		while (av[1][i])
		{
			if (seen[av[1][i]] == 0)
			{
				seen[av[1][i]] = 1;
				if (ft_strchr(av[2],av[1][i]) == 1)
					write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}


