#include <stdio.h>

int main()
{
	int a[ ] = {1, 2, 3, 5, 8, 13};
	int *p, *q;
	p = a;
	q = &a[0] + 3;
	
	printf("%d %d %d\n", (*p)++, *p++, *++p);
	printf("%d\n", *p);
	printf("%d\n", (*p)++);
	
	q = p + 3;
	printf("%d\n", *q - 2);
	printf("%d\n", *--p + 5);
	printf("%d\n", *p + *q);
	return 0;
} 