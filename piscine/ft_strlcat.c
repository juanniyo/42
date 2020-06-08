/*
 * La función strlcat() agrega como maximo caracteres (dstsize - strlen (dst)-1)
 * de src a dst(size dst siendo el tamaño del buffer de cadena dst.)
 *
 * El desbordamiento del buffer se puede verificar de la siguiente manera:
 * if (strlcat (dst, src, dstsize)>= dstsize)
 * return -1;
 *
 * */

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (size > dest_len + 1 && src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size < dest_len)
		return (size + src_len);
	return (dest_len + src_len);
}
