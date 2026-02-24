#include <stdio.h>

int main()
{
	int a[4] = {0, 1, 10, 11};
	int *p = &a[0];
	printf("*p = &a[0] Value is = %d\n", *p);
	printf("Address of element is: %u\n", *p);
	
	p = p + 1;
	printf("p = p + 1 Value is = %d\n", *p);
	printf("Address of element is: %u\n", *p);
	
	*p = *p + a[1];
	printf("*p = *p +a[1] Value is = %d\n", *p);
	printf("Address of element is: %u\n", *p);
	
	return 0;
}