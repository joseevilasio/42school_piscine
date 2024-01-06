#include <stdlib.h>
#include <stdio.h>

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

char    *ft_strdup(char *src)
{
    int i;
    char *str;

    i = 0;
    str = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
    while (src[i] != '\0')
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    printf("%s\n", ft_strdup("Hello"));
    return (0);
}
