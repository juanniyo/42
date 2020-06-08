/*
 * Las función strncat() es similar a strcat(), excepto que soló los 
 * primeros n caracteres de src están unidos a dest.
 *
 * */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';

	return (dest);
}
