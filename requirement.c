/*
** main.c for main in /home/oem/home/palindrome
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Thu Jun 16 10:21:00 2016 maxence.lauque
** Last update Sat Jun 18 00:29:32 2016 maxence.lauque
*/

int	my_factrec_synthesis(int nb)
{
  int	res;

  if (nb > 12 || nb < 0)
    return (0);
  res = 0;
  if (nb == 1 || nb == 0)
    return(1);
  else
    {
      res = nb * my_factrec_synthesis(nb - 1);
      return (res);
    }
}

int	my_squareroot_synthesis(int nb)
{
  int	root;

  root = 0;
  while (nb != root * root)
    {
      if (root > 46340)
	return (-1);
      root++;
    }
  return (root);
}
