#include "get_next_line.h"

int	salto_linea(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] != (char)c)
		return (-1);
	return (i);
}

int	get_next_line(int fd, char **line)
{
	static char	*sc_file;	//guarda los contenidos del búfer de lectura
	char		buf[BUFFER_SIZE + 1];	//guarda los elementos leídos del fichero
	char		*tmp;
	int			byte_was_read;
	int			i;

	if ((fd < 0) || (line == 0) || (BUFFER_SIZE <= 0 || read(fd, buf, 0)))
		return (-1);
	if (sc_file && (((i = salto_linea(sc_file, '\n')) != -1)))

	while (((byte_was_read = read(fd, buf, BUFFER_SIZE)) > 0))
	{
		buf[byte_was_read] = '\0';
		if (!sc_file)
			sc_file = ft_strdup(buf);
		else
		{
			tmp = ft_strjoin(sc_file, buf);
			//free(sc_file);
			sc_file = tmp;
		}
		//printf("%s", sc_file);
		if (*sc_file == '\n')
			break;
	}

	return (0);
}

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("text", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n\n", line);
	free(line);
	system("leaks a.out");
}
