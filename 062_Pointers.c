#include <stdio.h>

int main()
{
	float a = 10, b = 11;
	float *p, *q;
	p = &a;
	q = &b;
	*q = *p;
	printf("a is = %f %f %f", a, *p, *q);
	return 0;	
}