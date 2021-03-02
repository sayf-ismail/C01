#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int *div;
	int *mod;

	div = &a;
	mod = &b;

	ft_div_mod(42, 10, div, mod);
	return (0);
}
