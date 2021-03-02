#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;
	
	ptr_a = &a;
	ptr_b = &b;
	printf("a = %d \t b = %d", *ptr_a, *ptr_b);

	ft_swap(ptr_a, ptr_b);

	return (0);
}
