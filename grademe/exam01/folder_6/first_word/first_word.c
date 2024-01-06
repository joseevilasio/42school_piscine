#include <unistd.h>

void    primeiro(char *str)
{
    int i;

    i = 0;    
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            i++;
        else
        {
            write(1, &str[i], 1);
            i++;
        }
        if (str[i] == ' ')
            break ;
    }
}

int	main(int argc, char *argv[])
{
    if (argc == 2)
	{
        primeiro(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
