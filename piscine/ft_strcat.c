/*
 * La función strcat() une la cadena src a la cadena dest sobreescribiendo el
 * caracter '\0' al final de dest, y entonces añade un caracter final '\0'.
 * Las cadenas no deben solaparse, y la cadena dest debe tener suficiente
 * espacio para el resultado.
 * 
 * La funcion strcat() devuelve un puntero que apunta a la cadena resultante
 * dest.
 *
 * */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';

	return (dest);
}
