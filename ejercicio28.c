#include <stdio.h>

int main(){
	int i=0; 
	int a=0; 
	int b=0;
	
	printf("Introduzca la cantidad para encontrar sus divisores:\n ");
	scanf("%d", &a);
	
	for (i=1; i<=a; i++){
		
			if (a%i==0){
				printf("%d\n", i);
			}
		}
	
	}
	
	

