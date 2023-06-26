#include <unistd.h>

int	is_space(int c)
{
	return (c == 32 || c == 9 || c == 10);
}

void	rev(char *s)
{
	int i = 0;
	int start;
	int end;
	int flag;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		while (s[i] && is_space(s[i]))
			i--;
		end = i;
		while (s[i] && !is_space(s[i]))
			i--;
		start = i + 1;
		flag = start;
		while (start <= end)
			write(1, &s[start++], 1);
		while (s[i] && is_space(s[i]))
			i--;
		if (flag != 0 && i > 0)
			write(1, " ", 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev(av[1]);
	write(1, "\n", 1);
}
