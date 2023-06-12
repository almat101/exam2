#include <unistd.h>



void	rev_wsrt(char *s)
{
	int i = 0;
	int start;
	int end;
	int flag;

	while (s[i])
		i++;
	while (i >= 0)
	{
		while (s[i] == 0 || s[i] == 32 || s[i] == '\t')
			i--;
		end = i;
		while (s[i] && s[i] != 32 && s[i] != '\t')
			i--;
		start = i + 1;
		flag = start;
		while (start <= end)
			write(1, &s[start++],1);
		if (flag != 0)
			write(1, " ", 1);
	}
		
}


int main (int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		rev_wsrt(av[1]);
	}
	write(1, "\n", 1);
}
