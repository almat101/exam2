// char *s= " pippo  franco re del mondo";
//		"                " "ciao" ""

#include <stdlib.h>
#include <stdio.h>

char set_a = 32;
char set_b = 9;

int	words_count(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while (str[i] == set_a || str[i] == set_b)
		       i++;
		if (str[i] != set_a && str[i] != set_b && str[i] != 0)
			count++;
		while (str[i] != set_a && str[i] != set_b && str[i] != 0)
			i++;
	}
	return (count);
}

int	ft_strlen_sp(char *str,int i)
{
	int count = 0;
	while (str[i] != 0 && str[i] != set_a && str[i] != set_b)
	{
		i++;
		count++;
	}
	return (count);

}

void	w_copy(char *str, char *new, int i)
{
	int j = 0;
	while (str[i] != 0 && str[i] != set_a && str[i] != set_b)
		new[j++] = str[i++];
	new[j] = 0;
}
char	**ft_split(char *str)
{
	int w_count = words_count(str);
	int w_index = 0;
	int i = 0;
	char **split;

	split = (char **)malloc( sizeof(char *) * ( w_count + 1 ));
	split[w_count] = NULL;
	while (w_index < w_count)
	{
		while ( str[i] == set_a || str[i] == set_b)
			i++;
		//if (str[i] != set_a && str[i] != set_b && str[i] != 0)
	//	{
		split[w_index] = malloc( ft_strlen_sp(str,i) + 1);
		w_copy(str,split[w_index], i);
//		}
		while ( str[i] != set_a && str[i] != set_b && str[i] != 0)
			i++;
		w_index++;
	}
	return (split);
}

int main()
{
	char *s= "ciao pippo franco re  ";

	int i = 0;

	char **split = ft_split(s);

	while (split[i] != NULL)
	{
		printf("%s\n", split[i]);
		i++;
	}
}
