/*
** tools.c for tools in /home/oem/home/palindrome/src
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Jun 18 11:10:24 2016 maxence.lauque
** Last update Sun Jul 10 01:26:28 2016 maxence.lauque
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "my.h"

int	check_if_pal(char *str)
{
  int	a;
  int	b;
  char	*tmp;

  a = 0;
  b = my_strlen(str) - 1;
  if ((tmp = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (-1);
  while (b >= 0)
    {
      tmp[a] = str[b];
      a = a + 1;
      b = b - 1;
    }
  if (my_strcmp_no_lenght(str, tmp) == 0)
    {
      free(tmp);
      return (0);
    }
  else
    {
      free(tmp);
      return (1);
    }
}

char	*rev_str(char *str)
{
  int	a;
  int	b;
  char	*tmp;

  a = 0;
  b = my_strlen(str) - 1;
  if ((tmp = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  while (b >= 0)
    {
      tmp[a] = str[b];
      a = a + 1;
      b = b - 1;
    }
  return (tmp);
}

int	check_if_int(char *str)
{
  int	size;
  char	*tmp;

  if ((tmp = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (0);
  size = atoi(str);
  sprintf(tmp, "%d", size);
  if ((my_strcmp(tmp, str)) != 0)
    {
      my_puterror("Error : int overflow\n");
      free(tmp);
      return (84);
    }
  if (size > 2147483647 || size < 0)
    {
      my_puterror("Error : int overflow\n");
      free(tmp);
      return (84);
    }
  free(tmp);
  return (0);
}
