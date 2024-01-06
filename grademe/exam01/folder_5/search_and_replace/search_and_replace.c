#include <unistd.h>

void	search_and_replace(char *str, char *a, char *b)
{	
	int	i_a;
	int i_b;
	
	i_a = 0;
	i_b = 0;
	while (a[i_a] != '\0')
		i_a++;		
	while (b[i_b] != '\0')
		i_b++;
	if (i_a == 1 && i_b == 1)
	{
		while (*str != '\0')
		{
			if (*str == *a)
				write(1, b, 1);
			else
				write(1, str, 1);
			str++;
		}
	}	
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		search_and_replace(argv[1], argv[2], argv[3]);
	}
	write(1, "\n", 1);
	return (0);
}
