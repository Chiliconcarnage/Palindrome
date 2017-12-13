/*
** my.h for my.h in /home/oem/home/palindrome/include
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Thu Jun 16 15:27:30 2016 maxence.lauque
** Last update Sat Jun 18 13:15:21 2016 maxence.lauque
*/

#ifndef MY_H_
#define MY_H_

typedef struct	s_all
{
  int	av2;
  int	max;
  int	min;
  int	base_imax;
  int	base_imin;
}		t_all;

int	check_error(int, char **, t_all *);
void	display_help();
int	option_help(char **);
int	algo_n(char *, t_all *);
int	check_error_min_max(int, char **, int, t_all *);
int	check_syntaxe_option(char *);
int	check_my_base(char **,t_all *);
int	check_if_int(char *);
int	check_if_pal(char *);
char	*rev_str(char *);
int	algo_p(char *, t_all *);

#endif /* !MY_H_ */
