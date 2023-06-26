#include <unistd.h>

void	ft_putnbr(int n)
{
	char *digits= "0123456789";
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &digits[ n % 10], 1);


}


int	ft_atoi(char *s)
{
	int res = 0;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - 48;
		s++;
	}
	return (res);
}

int main(int ac, char **av)
{	
	if (ac == 2)
	{
		int i = 1;
		int num = ft_atoi(av[1]);
		while ( i <= 9)
		{	
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(num * i);
			i++;
			if (i < 9)
				write(1, "\n", 1);
		}
	}
		write(1,"\n",1);
}
