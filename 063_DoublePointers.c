#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	int **q = &p;
	// int **q = &a;
	int ***r = &q;
	
	printf("a = %d\n", a);
	printf("*p = %d\n", *p);
	printf("**q = %d\n", *(*q));
	printf("***r = %d\n", *(*(*r)));
	printf("Address of q %x %x\n", r, &q);
	printf("Address of p %x %x\n", &p, q);
	
	return 0;
}
	