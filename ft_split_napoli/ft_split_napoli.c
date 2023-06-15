#include <stdlib.h>
#include <stdio.h>

# define WDCOUNT 1000
# define WDLEN 1000

char	**ft_split_napoli(char *s)
{

	int i = 0;
	int i2 = 0;
	int i3;
	char **tab;

	tab = (char **)malloc(sizeof(char *) * WDCOUNT + 1);
	while (s[i] == 32 || s[i] == 9 || s[i] == 10)
		i++;
	while (s[i])
	{
		if (s[i] > 32)
		{
			i3 = 0;
			tab[i2] =(char *) malloc(WDLEN + 1);
			while (s[i] > 32)
			{
				tab[i2][i3] = s[i];
				i++;
				i3++;
			}
			tab[i2][i3] = 0;
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

int main()
{
	char *s = " zio can\n    che   merdddda\n";
	char **tab = ft_split_napoli(s);
	int i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n",tab[i]);
		i++;
	}
}

