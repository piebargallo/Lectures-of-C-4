#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int x = 4;
	ptr = &x;
	printf("%d\n", *ptr);
	free (ptr);
	printf("%d", *ptr);
	return 0;
}