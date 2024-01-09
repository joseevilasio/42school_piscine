#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int negative;
	int	abs;

	negative = -1;
	abs = ABS(negative);
	if (abs >= 0)
	{
		printf("Sucess!");
	}
	return (0);
}

/*this file is not required for the exercise*/
