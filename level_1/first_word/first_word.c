#include <unistd.h>


void	first(char *s)
{
	int i;
	int start;
	int end;

	i = 0;

		while( s[i] ==  32 || s[i] == 9)
			i++;
		start = i;
		while (s[i] && s[i] != 32 && s[i] != 9)
			i++;
		end = i - 1;
		while (start <= end)
		{
			write(1, &s[start], 1);
			start++;
		}

}



int main(int ac, char **av)
{
	if (ac == 2)
		first(av[1]);
	write(1, "\n", 1);
}
