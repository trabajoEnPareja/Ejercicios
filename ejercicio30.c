#include <stdio.h>

int main(){

	int a=0;
	int b=1;
	int i=0;

	printf("Introduzca una cantidad:\n");
	scanf("%d", &a);
	
	for (i=1;i<=a;i++){
		
		b=b*i;
	}

	printf("%d", b);

}
