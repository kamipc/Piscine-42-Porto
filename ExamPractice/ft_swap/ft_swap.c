#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

// int main()
// {	
// 	int a = 2;
// 	int b = 5;
// 	ft_swap(&a, &b);
// 	printf ("%d, %d", a, b);
// }