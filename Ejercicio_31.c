#include <stdio.h>

int main () {
	int pos = 0, neg = 0, npos = 0, n, i;
	for (i = 0; i < 6; i++)
	{
		printf ("Introduzca un digito. --->");
		scanf ("%d",&n);
		
		if (n <= 0) {
			neg += n;	
		} else if (n > 0) {
			pos += n;
			npos += 1;
		}
	}
	printf ("\n La sumatoria de los numeros negativos ingresados es %d",neg);
	if (pos == 0) {
		printf ("\n El promedio de los numeros positivos ingresados es indefinido.");
	} else {
		pos = pos / npos;
		printf ("\n \n El promedio de los numeros positivos ingresados es %d",pos);
	}
	return 0;		
}
