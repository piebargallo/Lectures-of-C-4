#include <stdio.h>

int main ()
{
	int a = -11;
	printf("%d\n", a);
	int *p = &a;
	printf("%d\n", a);
	
	*p = 10;
	printf("%d\n", a);
	return 0;
}