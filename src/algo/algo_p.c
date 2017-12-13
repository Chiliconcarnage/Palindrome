/*
** algo_p.c for algo_p in /home/oem/home/palindrome/src
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Jun 18 11:04:57 2016 maxence.lauque
** Last update Sat Jun 18 21:00:36 2016 maxence.lauque
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "my.h"

int	while_palind_exist(char *str, int start, t_all *all)
{
  char	*nb;
  char	*rev;
  int	tmp;
  int	a;

  a = 0;
  if ((nb = malloc(10)) == NULL)
    return (-1);
  /* if ((rev = malloc(10)) == NULL) */
  /*   return (-1); */
  sprintf(nb, "%d", start);
  while (atoi(nb) != atoi(str))
    {
      if (atoi(nb) > atoi(str))
        return (-1);
      rev = rev_str(nb);
      tmp = atoi(nb) + atoi(rev);
      sprintf(nb, "%d", tmp);
      /* free (rev); */
      a++;
    }
  if (a >= all->min && a <= all->max)
    printf("%d leads to %s in %d iteration(s) in base 10\n", start, nb, a);
  free(nb);
  return (0);
}

int	algo_p(char *str, t_all *all)
{
  int	start;
  int	final_nb;

  if ((check_if_int(str)) == 84)
    return (84);
  start = 1;
  final_nb = atoi(str);
  while (start <= final_nb)
    {
      while_palind_exist(str, start, all);
      start++;
    }
  return (0);
}
