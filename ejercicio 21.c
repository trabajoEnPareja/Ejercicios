#include <stdio.h>

int main(){
	
	int a=0;
	int b=0;
	int i=0;
	printf("A continuacion introduzca tres cantidades \n");
	for(i=0; i<3;i++){
		
		scanf("%d", &b);
		if(b>a){
			a = b;}
		else{
		}
	}
	printf("Cantidad mayor introducida: %d", a);
				
	
}
