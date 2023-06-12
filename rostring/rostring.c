#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	**ft_split(char *str)
{
	int i;
	int i2;
	int i3;

	i = 0;
	i2 = 0;
	char **res;

	res = (char **)malloc(sizeof(char *) * 100);
	
	while(str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] != 0)
	{
		if (str[i] != 32 && str[i] != 9)
		{
			i3 = 0;
			res[i2] = (char *)malloc(sizeof(char) * 100);
			while (str[i] != 32 && str[i] != 9 && str[i])
			{
				res[i2][i3] = str[i];
				i++;
				i3++;
			}
			res[i2][i3] = 0;
			i2++;
		}
		else
			i++;
	}
	res[i2] = 0;
	return (res);
}


int main (int ac, char **av)
{
	int i;
	char **res;
	i = 1;
	if (ac > 1)
	{
		res = ft_split(av[1]);
		while(res[i])
		{
			ft_putstr(res[i]);
			write(1, " " , 1);
			i++;
		}
		ft_putstr(res[0]);
	}
	write(1, "\n", 1);



}

