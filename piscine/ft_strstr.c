/*
 * La función strstr() encuentra la primera ocurrencia de la subcadena needle
 * en la cadena haystack. Los caracteres de terminación '\0' no se comparan.
 *
 * La funcion strstr() devuelve un puntero al comienzo de la subcadena o 
 * NULL si la subcadena no se encuentra.
 *
 * */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);

		}
		j = 0;
		i++;
	}
	return (0);
}
