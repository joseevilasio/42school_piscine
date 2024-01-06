#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main(void)
{
	int a = 456;
	int b = 789;

	printf("a = %d | b = %d \n", a, b);
	ft_swap(&a, &b);
	printf("a = %d | b = %d \n", a, b);
}