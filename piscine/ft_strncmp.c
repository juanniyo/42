/*
 * La función strncmp() es similar a strcmp() salvo que solamente compara los 
 * primeros n caracteres se s1.
 *
 * */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while ((cs1[i] != '\0' || cs2[i] != '\0') && i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	if (cs1[i] != cs2[i] && i != n)
		return (cs1[i] - cs2[i]);
	return (0);
}
