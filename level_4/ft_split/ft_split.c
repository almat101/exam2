#include <stdlib.h>
#include <stdio.h>

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
	int wc = word_count(s);;
	int k = 0;
	int start;
	int end;
	char **res;

	res = (char **)malloc( sizeof(char *) * (wc + 1));

	while (s[i])
	{
		while (s[i] && is_space(s[i]))
			i++;
		start = i;
		while (s[i] && !is_space(s[i]))
			i++;
		end = i;
		if ( start < end)
		{
			res[k] = (char *)malloc((end - start) + 1);
			ft_strncpy(res[k++], &s[start], end - start);
		}
	}
	res[k] = 0;
	return (res);
}

/*int main()
{
	char *s = "  madfj  adf  lgaox  ";
	int i = 0;
	char **res = ft_split(s);
	while (res[i])
	{
		printf("%s\n",res[i]);
		i++;
	}
}

*/

