#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
    return (i);
}

void	inter(char *str, char *str2)
{
	int i;
    int j;
    int len;

	i = 0;
    j = 0;
    len = ft_strlen(str);
	while (str2[j] != '\0' && i < len)
	{
        write(1, &str[i], 1);
		if (str[i] == str2[j])
		{
			
            i++;
		}
        j++;        
	}
}    

int main(int argc, char *argv[])
{
    if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
    return (0);
}
