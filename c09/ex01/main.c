#include "include/ft.h"

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 0)
	{
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_strlen(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
