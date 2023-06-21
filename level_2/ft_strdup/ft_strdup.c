#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *s)
{
	int i;
	int len;
	char *dup;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	dup = malloc (len + 1);
	if (!dup)
		return (0);
	while(s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i]= 0;
	return (dup);
}
