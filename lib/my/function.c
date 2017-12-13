/*
** function.c for functions basic in /home/oem/home/palindrome/lib/my
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Thu Jun 16 11:44:19 2016 maxence.lauque
** Last update Sat Jun 18 12:20:51 2016 maxence.lauque
*/

#include <unistd.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      i++;
    }
  return (i);
}

int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (my_putchar(str[i]) == -1)
	return (-1);
      i++;
    }
  return (0);
}

int	my_puterror(char *str)
{
  int	i;

  i = my_strlen(str) + 1;
  if (write(2, str, i) == -1)
    return (-1);
  return (0);
}
