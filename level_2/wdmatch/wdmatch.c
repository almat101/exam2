#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	wd(char *s1, char *s2)
{
	int wd = 0;
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		while(s2[j])
		{
			if (s1[i] == s2[j])
			{
				wd++;
				break;
			}
		j++;	
		}
	i++;
	}

	if ( ft_strlen(s1) == wd)
		ft_putstr(s1);
}



int main (int ac, char **av)
{
	if (ac == 3)
		wd(av[1],av[2]);
	write(1, "\n", 1);
}

