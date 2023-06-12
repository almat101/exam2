#include <unistd.h>
#include <stdio.h>

void ft_putchar_n (char c, int i)
{
	while(i)
	{
		write(1,&c,1);
	i--;
	}
}

int ft_index_low(char c)
{	
	int i = 0;
	char *arr ="abcdefghijklmnopqrstuvwxyz";	
	while (arr[i] != c && arr[i])
		i++;
	return (i + 1);
}

int ft_index_upp(char c)
{	
	int i = 0;
	char *arr2 ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (arr2[i] != c && arr2[i])
		i++;
	return (i + 1);
}


int main(int ac, char **av)
{
	
      int j = 0;
	
	if( ac == 2)
	{
		while (av[1][j])
		{
			if(av[1][j] >= 'a' && av[1][j] <= 'z')	
				ft_putchar_n(av[1][j],ft_index_low(av[1][j]));
			else if(av[1][j] >= 'A' && av[1][j] <= 'Z')	
				ft_putchar_n(av[1][j],ft_index_upp(av[1][j]));
			else
				write(1, &av[1][j], 1);
			j++;
		}
	}
}
