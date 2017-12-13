# PROJET PALINDROME

USAGE

./palindrome n b [c1] [c2] ...

n l’entier de départ (n >= 0), affiché en base 10, b la base dans laquelle n doit être transformé (1 < b <= 10), c1, c2,... les contraintes, p le palindrome obtenu, affiché en base 10, i le plus petit nombre d’itérations pour obtenir un palindrome.

Les contraintes sont :

reverse : le premier argument est le palindrome résultat (p), et non l’entier de départ (n) ; dans ce cas, le plus petit entier n convenant sera affiché.

">imin" : le palindrome doit être à un nombre d’itérations strictement supérieur à imin

">=imin" : le palindrome doit être à un nombre d’itérations supérieur ou égal à imin

"<imax" : le palindrome doit être à un nombre d’itérations strictement inférieur à imax

"<=imax" : le palindrome doit être à un nombre d’itérations inférieur ou égal à imax

EXEMPLE

./palindrome 4782 toto
argument invalide

./palindrome 4782 10
4782 donne 46464 en 3 itération(s) (en base 10)

./palindrome 64 2
64 donne 65 en 1 itération(s) (en base 2)

./palindrome 363 10 reverse
3 donne 363 en 6 itération(s) (en base 10)

./palindrome 363 10 reverse "<=3"
15 donne 363 en 3 itération(s) (en base 10)

./palindrome 363 10 reverse ">14"
pas de solution
