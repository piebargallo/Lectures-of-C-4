#include <stdio.h>

int main()
{
	void *vp;
	int a = 4;
	float b = 11.1;
	char c = '0';
	
	vp = &a;
	printf("%d\n", *(int*)vp);
	vp = &b;
	printf("%f\n", *(float*)vp);
	vp = &c;
	printf("%c\n", *(char*)vp);
	return 0;
}