#include <stdio.h>
int main()
{
	int mayor, num;
	do {
	printf ("Ingrese un numero: ");
	scanf ("%d", &num);
	if (num > mayor) 
	{
		mayor = num; 
	}
		} while (num != 0);
	printf ("El mayor numero ingresado fue: %d",mayor);
	return 0;
}
