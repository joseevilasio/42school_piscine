#include <unistd.h>

void	maff_alpha(void)
{
	char i;
	char aux;

	i = 'z';
	while (i != ('a' - 1))
	{
		if (i % 2 == 0)
			write(1, &i, 1);
		else
		{
			aux = i - 32;
			write(1, &aux, 1);
		}
		i--;
	}
    write(1, "\n", 1);
}

int main(void)
{
    maff_alpha();
    return (0);
}