/*
** error_gestion.c for error_gestion in /home/oem/home/palindrome/src
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Thu Jun 16 15:25:44 2016 maxence.lauque
** Last update Sat Jun 18 13:51:11 2016 maxence.lauque
*/

#include "my.h"
#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

int	check_syntaxe_option(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (84);
  while (str[i] != '\0')
    {
      if (str[i] >= 48 && str[i] <= 57)
        i++;
      else
        return (84);
    }
  return (0);
}

int	check_my_base(char **av, t_all *all)
{
  if ((av[3]) != NULL && av[4] != NULL && av[5] == NULL
      && ((my_strcmp(av[3], "-b")) == 0)
      && ((my_strcmp(av[4], "10")) == 0))
    return (0);
  if ((av[3] != NULL && av[4] != NULL && av[5] != NULL
       && av[6] != NULL && av[7] == NULL) &&
      ((my_strcmp(av[5], "-imax")) == 0))
    {
      all->base_imax = 1;
      return (0);
    }
  if ((av[3] != NULL && av[4] != NULL && av[5] != NULL
       && av[6] != NULL && av[7] == NULL) &&
      ((my_strcmp(av[5], "-imin")) == 0))
    {
      all->base_imin = 1;
      return (0);
    }
  return (-1);
}

int	check_first_arg(char **av)
{
  if ((my_strcmp(av[1], "-p")) != 0 && (my_strcmp(av[1], "-n")) != 0)
    {
      my_puterror("Error : invalid syntaxe\n");
      return (84);
    }
  return (0);
}

int	check_error(int ac, char **av, t_all *all)
{
  int	i;
  int	a;

  a = 0;
  i = 1;
  if (ac < 3)
    {
      my_puterror("Invalid number of arguments\n");
      return (84);
    }
  if ((check_error_min_max(ac, av, a, all) == 84) ||(check_first_arg(av) == 84))
    return (84);
  while (av[i] != NULL)
    {
      if ((((my_strcmp(av[i], "-n")) == 0) &&
	   ((check_syntaxe_option(av[i + 1])) != 0)) ||
	  (((my_strcmp(av[i], "-p")) == 0)&& ((check_syntaxe_option(av[i + 1])) != 0)))
        {
          my_puterror("Error : invalid syntaxe\n");
          return (84);
        }
      else
        i++;
    }
  return (0);
}
