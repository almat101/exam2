#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int	is_space(int c)
{
	return (c == 32 || c == 9 || c == 10);
}

int 	word_count(char *s)
{
	int i = 0;
	int wc = 0;
	while (s[i])
	{
		while (s[i] && is_space(s[i]))
			i++;
		if (s[i])
			wc++;
		while (s[i] && !is_space(s[i]))
			i++;
	}
	return (wc);
}

char	*ft_strncpy(char *dest, char *src, int len)
{
	int i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}


char	**ft_split(char *s)
{
	int i = 0;
	int wc = word_count(s);
	int k = 0;
	int start;
	int end;
	char **res;
	
	res = (char **)malloc( sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] && is_space(s[i]))
			i++;
		start = i;
		while (s[i] && !is_space(s[i]))
			i++;
		end = i;
		if (start < end)
		{
			res[k] = (char *)malloc(end - start + 1);
			ft_strncpy(res[k++], &s[start], end -start);
		}
	}
	res[k] = 0;
return (res);
}


int main (int ac, char **av)
{

	int i = 1;
	if ( ac > 1)
	{
		char *s = av[1];
		char **res = ft_split(s);

		while (res[i] != NULL)
		{
			ft_putstr(res[i++]);
			write(1, " ", 1);
		}
		ft_putstr(res[0]);
	}
	write(1, "\n", 1);


}

