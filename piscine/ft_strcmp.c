/*
 * La función strcmp() compara las dos cadenas de caracteres s1 y s2.
 * Devuelve un entero menor, igual o mayor que cero si se encuentra que s1
 * es, respectivamente, menor que, igual a, o mayor que s2.
 *
 * */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;	

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
