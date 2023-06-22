#include <unistd.h>


int	is_space(int c)
{
	return (c == 32 || c == 9 || c == 10);
}


void	expand(char *s)
{
	int i = 0;
	int start;
	int end;
	int f = 0;
	while (s[f])
		f++;
	while ( i < f)
	{
		while (s[i] && is_space(s[i]))
			i++;
		start = i;
		while (s[i] && !is_space(s[i]))
			i++;
		end = i - 1;
		while (start <= end)
		{
			write(1, &s[start++], 1);
		}
		while (s[i] && is_space(s[i]))
			i++;
		if (i != f)
			write(1, "   ", 3);
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		expand(av[1]);
	write(1, "\n", 1);
}

