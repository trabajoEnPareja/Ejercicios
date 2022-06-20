#include <stdio.h>
int main () {
	int sum = 0, n;
	printf ("indtroduza un numero --->");
	scanf ("%d",&n);
	do {
		sum = sum + n%10;
		n = n / 10;
	} while (n > 0);
	printf ("la suma de los digitos es: %d",sum);
	return 0;
}

