#include <stdio.h>

int main()
{
	int a[4] = {0, 1, -1, 10}, *p = &a[0], *q = &a[2];
	*p = *p - *q;
	
	printf("Value of subtraction = %d\n", *p);
	return 0;
}

// Output one