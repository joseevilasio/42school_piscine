#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	ft_read(char *file, char *str, int size)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	read(fd, str, size);
	close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	char str[1000];
	
	if (argc == 2)
	{
		if (ft_read(argv[1], str, 1000) == 0)
			ft_putstr(str);
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_putstr("File name missing.\n");
	return (0);
}
