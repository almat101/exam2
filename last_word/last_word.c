#include <unistd.h>

char	*last(char *s)
{
	int i = 0;
	int end;
	int start;

	while (s[i])
		i++;
	i--;
	while (s[i] == 32 && s[i] != 9)
		i--;
	end = i;
	while (s[i] != 32 && s[i] != 9 && i != 0)
		i--;
	if (i == 0)
		start = 0;
	else
		start = i + 1;
	while (start <= end)
		write(1, &s[start++], 1);
}
int	main(int ac, char **av)
{
	if (ac == 2)
		last(av[1]);
	write(1, "\n", 1);
}
