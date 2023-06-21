#include <unistd.h>

int	ft_is_space(int c)
{
	return (c == 32 || c == 9);
}


char	*last(char *s)
{
	int i = 0;
	int end;
	int start;

	while (s[i])
		i++;
	i--;
	while (ft_is_space(s[i]))
		i--;
	while (s[i] && !ft_is_space(s[i]))
		i--;
	i++;
	while(s[i] && !ft_is_space(s[i]))
		write(1, &s[i++],1);	
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last(av[1]);
	write(1, "\n", 1);
}
