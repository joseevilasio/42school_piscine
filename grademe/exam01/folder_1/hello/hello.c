#include <unistd.h>

void	ft_hello(void)
{
	char *str;

	str = "Hello World!";
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
    write(1, "\n", 1);
}

int main(void)
{
    ft_hello();
    return (0);
}
