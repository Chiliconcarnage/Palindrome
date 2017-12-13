/*
** main.c for int main in /home/oem/home/palindrome
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Thu Jun 16 11:32:10 2016 maxence.lauque
** Last update Sat Jun 18 11:13:25 2016 maxence.lauque
*/

#include <stdlib.h>
#include "lib.h"
#include "my.h"

int	main(int ac, char **av)
{
  t_all	all;

  all.min = 0;
  all.max = 100;
  option_help(av);
  if ((check_error(ac, av, &all)) == 84)
    return (84);
  if ((my_strcmp(av[1], "-n")) == 0)
    {
      all.av2 = atoi(av[2]);
      algo_n(av[2], &all);
    }
  if ((my_strcmp(av[1], "-p")) == 0)
    {
      all.av2 = atoi(av[2]);
      if (check_if_pal(av[2]) == 1 || all.av2 == 0)
	{
	  my_puterror("no solution\n");
	  return (0);
	}
      algo_p(av[2], &all);
    }
  return (0);
}
