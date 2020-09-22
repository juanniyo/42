#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return (char *)s;
}

int	get_next_line(int fd, char **line)
{
	static char	*sc_file[MAX];	//guarda los contenidos del búfer de lectura
	char		buf[BUFFER_SIZE + 1];	//guarda los elementos leídos del fichero
	char		*tmp;
	int			byte_was_read;

	if ((fd < 0) || (line == 0) || (BUFFER_SIZE <= 0 || read(fd, buf, 0)))
		return (-1);
	while ((byte_was_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[byte_was_read] = '\0';
		if (ft_strchr(buf, '\n'))
			break;
		else
		{
			sc_file[fd] = (*line = ft_strjoin(*line, buf));
		}

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
