/*
** error_gestion_iminmax.c for iminmax_error in /home/oem/home/palindrome/src
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Jun 18 10:46:30 2016 maxence.lauque
** Last update Sat Jun 18 16:50:32 2016 maxence.lauque
*/

#include "my.h"
#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

int	print_error_minmax(int a)
{
  if (a != 1)
    {
      my_puterror("Error : invalid syntaxe\n");
      return (84);
    }
  return (0);
}

int	check_imin(char **av, t_all *all)
{
  if ((av[3]) != NULL && av[4] != NULL && av[5] == NULL
      && ((my_strcmp(av[3], "-imin")) == 0)
      && ((check_syntaxe_option(av[4])) == 0))
    {
      if ((check_if_int(av[4])) == 84)
        return (84);
      all->min = atoi(av[4]);
      return (0);
    }
  return (-1);
}

int	check_imax(char **av, t_all *all)
{
  if ((av[3]) != NULL && av[4] != NULL && av[5] == NULL
      && ((my_strcmp(av[3], "-imax")) == 0)
      && ((check_syntaxe_option(av[4])) == 0))
    {
      if ((check_if_int(av[4])) == 84)
        return (84);
      all->max = atoi(av[4]);
      return (0);
    }
  return (-1);
}

int	check_error_min_max(int ac, char **av, int a, t_all *all)
{
  if (ac > 3)
    {
      if ((check_my_base(av, all)) == 0)
        {
          a = 1;
	  if (all->base_imax == 1)
	    all->max = atoi(av[6]);
	  if (all->base_imin == 1)
	    all->min = atoi(av[6]);
          return (0);
        }
      else if ((check_imin(av, all)) == 0)
	{
          a = 1;
          return (0);
        }
      else if ((check_imax(av, all)) == 0)
        {
          a = 1;
          return (0);
        }
      else if ((print_error_minmax(a)) == 84)
        return (84);
    }
  return (0);
}
