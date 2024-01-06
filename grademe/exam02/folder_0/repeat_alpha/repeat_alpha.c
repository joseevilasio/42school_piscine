#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i;
	int aux;
	int len;

	i = 0;
	while (str[i] != '\0')
	{
		aux = 0;
		len = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			len = str[i] - 'A';
			while (aux < len)
			{
				write(1, &str[i], 1);
				aux++;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			len = str[i] - 'a';
			while (aux < len)
			{
				write(1, &str[i], 1);
				aux++;
			}
		}
		write(1, &str[i], 1);
		i++;
	}
}    

int main(int argc, char *argv[])
{
    if (argc > 1)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
    return (0);
}