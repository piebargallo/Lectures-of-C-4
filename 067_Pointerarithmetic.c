// Subtraction
#include <stdio.h>

int main()
{
	int a[4] = {0, 1, -1, 11};
	int *p = &a[0], *q = &a[2], d = 0, s = 0;
	s = p - q;
	d = *p - *q;
	
	printf("Value of p: %d\n", p);
	printf("Value of q: %d\n", q);
	printf("Value of s is: %d\n", s);
	printf("\n");
	
	printf("Value of *p: %d\n", *p);
	printf("Value of *q: %d\n", *q);
	printf("Value of d is: %d\n", d);
	return 0;
}