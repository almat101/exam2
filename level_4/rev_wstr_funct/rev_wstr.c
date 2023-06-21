#include <unistd.h>


void ft_wrt ( char *s, int i)
{
	int n = i;
  if (s[i] == 9 || s[i] == 32)
  {
    i++;
  }
  while (s[i] != 0 && s[i] != 9 && s[i] != 32)
  {
    write(1,&s[i],1);
    i++;
  }
  if (n != 0)
	  write(1, " ", 1);
}
void rev (char *s)
{
    int i = 0;
    int start;
    int end;
    int flag;

    while (s[i])
        i++;
    while (i > 0 )
    {
      if (s[i] == 32 || s[i] == 9)
        ft_wrt(s,i);
      i--;
    }
    if (s[0] != 9 || s[0] != 32)
      ft_wrt(s,0);
}


int main (int ac, char **av)
{
  if (ac == 2)
  	rev(av[1]);
  write( 1, "\n", 1);
  return (0);
}
