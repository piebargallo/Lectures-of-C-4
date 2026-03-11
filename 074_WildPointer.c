#include <stdio.h>

int main()
{
	int *ptr;
	int x = 4;
	ptr = &x;
	printf("%d", *ptr);
	return 0;
}