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
	char	buf[BUFFER_SIZE + 1];
	int		byte_was_read;

	while ((byte_was_read = read(fd, buf, BUFFER_SIZE)))
	{
		if (ft_strchr(buf, '\n'))
		{
			break;
		}
		buf[byte_was_read] = '\0';
		*line = ft_strjoin(*line, buf);
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

	get_next_line(fd, &line);
	printf("%s\n", line);
}
