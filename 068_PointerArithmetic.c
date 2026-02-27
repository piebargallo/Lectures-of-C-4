// Increment/Decrement
#include<stdio.h>

int main()
{
	int a[ ] = {1, 2, 3, 4};
	int *p;
	p = &a[2];
	
	printf("Value of p++ %d\n", *p++);
	printf("Value of p-- %d\n", *p--);
	printf("value of ++p %d\n", ++*p);
	printf("Value of --p %d\n", --*p);
	return 0;
}