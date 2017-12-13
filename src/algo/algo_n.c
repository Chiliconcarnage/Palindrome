/*
** algo_n.c for algo_n in /home/oem/home/palindrome/src
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Jun 18 11:00:15 2016 maxence.lauque
** Last update Tue Aug 23 19:43:51 2016 maxence.lauque
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "my.h"

int	display_algo_n(int a, t_all *all, char *end_str)
{
  if (a >= all->min && a <= all->max)
    {
      printf("%d leads to %s ", all->av2, end_str);
      printf("in %d iteration(s) in base 10\n", a);
    }
  else
    {
      my_puterror("no solution\n");
      return (0);
    }
  return (0);
}

int	algo_n(char *str, t_all *all)
{
  char	*new_str;
  int	nb;
  char	*end_str;
  char	*save_str;
  int	a;

  a = 0;
  new_str = str;
  end_str = str;
  if ((check_if_int(str)) == 84)
    return (84);
  while ((check_if_pal(end_str)) != 0)
    {
      save_str = new_str;
      new_str = rev_str(save_str);
      nb = atoi(save_str) + atoi(new_str);
      sprintf(end_str, "%d", nb);
      new_str = end_str;
      a++;
    }
  if ((display_algo_n(a, all, end_str)) == 0)
    return (0);
  return (0);
}
