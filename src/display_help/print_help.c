/*
** print_help.c for print_help in /home/oem/home/palindrome/src
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Thu Jun 16 15:32:33 2016 maxence.lauque
** Last update Thu Jun 16 15:55:08 2016 maxence.lauque
*/

#include <stdio.h>
#include "lib.h"

void	display_help()
{
  my_putstr("USAGE\n\t./palindrome -n number -p palindrome [-b base]");
  my_putstr(" [-imin i] [-imax i]\n\nDESCRIPTION\n\t-n nb\t  integer");
  my_putstr(" to be transformed (≥ 0)\n\t-p pal\t  palindromic number");
  my_putstr(" to be obtained (incompatible with the −n option) ");
  my_putstr("(≥ 0)\n\t\t  if defined, all fitting values of n will be");
  my_putstr(" output\n\t-b base\t  base in which the procedure will be ");
  my_putstr("executed (1 < b ≤ 10) [def: 10]\n\t-imin i\t  minimum number");
  my_putstr(" of iterations, included (≥ 0) [def: 0]\n\t-imax i\t  maximum");
  my_putstr(" number of iterations, included (≥ 0) [def: 100]\n");
}

int	option_help(char **av)
{
  if (av[1] != NULL && (my_strcmp(av[1], "-h")) == 0)
    {
      if (av[2] == NULL)
        {
          display_help();
          return (0);
        }
      else
        {
          my_puterror("Error of syntaxe, tape -h for help\n");
          return (84);
        }
    }
  return (0);
}
