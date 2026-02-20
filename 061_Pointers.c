/* &(address of) and *(indirection) operator
	p, dirección de memoria
	*p, valor almacenado en esa dirección
	&a, dirección de memoria de a
	&p, dirección de memoria del puntero
*/

#include <stdio.h>

int main()
{
	int a = 10, c;
	int *p; // Declaración de un puntero a un entero, guarda una dirección
	p = &a; // Guarda la dirección de memoria de 'a', & es dirección de memoria de
	c = *p; // 'c' toma el valor al que apunta 'p' (es decir, el valor de 'a'), ve al valor apuntado
	
	printf("Value of a = %d\n", a);
	printf("Value of a = %d\n", *p);
	printf("Address of a = %x\n", &a);
	printf("Address of a = %x\n", p);
	printf("Addres of p = %x\n", &p);
	printf("c = %d\n", c);
	
	return 0;
}