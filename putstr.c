#include <unistd.h>

void ft_putstr( char *s)
{
	while (*s)
		write(1, s++, 1);
}

int main()
{
	ft_putstr("pippo"); 
} 
