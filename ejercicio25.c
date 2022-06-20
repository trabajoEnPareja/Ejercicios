#include <stdio.h>

int main(){
	
	int year=0;
	
	printf("Introduzca un año: ");
	scanf("%d", &year);
	
	if(year%4==0 && year%100!=0 || year%400==0){
		
		
		printf("El año introducido es bisiesto.");
	}
	else{
		printf("El año introducido no es bisiesto");
	}
}
