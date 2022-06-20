#include <stdio.h>
int main() {
	int n, x, z, ix = 1, iy, iz = 0, pares = 0, impares = 0, multiplo=0;
	do {
		printf ("Introduzca un digito entero positivo. ---> ");
		scanf ("%d",&n);
		x = n; z = n;
		if (n > 0) {
			while (ix<=n) {
				if (ix%2==0) {
					pares +=1;
				} else {
					impares +=1;
					iy +=1;
				}
				ix++;
			} 
			printf ("\nLa cantidad de numeros pares que tiene %d son %d", n, pares);
			printf ("\n\nLa cantidad de numeros impares que tiene %d son %d \n\n", n, impares);
			
			iz = z%3;
			if (iz == 0) {
				multiplo += 1;
			}
			} else {
		printf ("\nIntroduzca un numero POSITIVO!!! \n \n");
		}
	} while (n != -1);	
	printf ("\nLectura terminada por el usuario.");
	printf ("\n\nLa cantidad de numeros ingresados, que son multiplos de 3 es %d",multiplo);
	return 0;
}
