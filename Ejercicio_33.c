#include <stdio.h>
#include <string.h>

int main (){
	int porcentaje, n, promedio = 0, calificacion, aprobados = 0;
	char num[5];
	char S[] = "S";
	printf ("\n Desea evaluar calificaciones? Pulse S para continuar. ---> ");
	scanf ("%s",&num);
	if (strcmp(num,S) == 0) {
		do {
		printf ("\n Ingrese una calificacion. ---> ");
		scanf ("%d",&calificacion);
		if (calificacion > 4) {
			promedio = promedio + calificacion;
			aprobados = aprobados + 1;
		}
		n = n + 1;
		printf ("\n Ingresar otra calificacion? S para continuar. ---> ");
		scanf ("%s",&num);
		} while (strcmp(num,S) == 0);
		
	porcentaje = (aprobados * 100) / n;
	promedio = promedio / aprobados;
	}
	
	printf ("\n El porcentaje de alumnos aprobados es de %d %", porcentaje);
	printf ("\n \n La calificacion promedio de los alumnos aprobados es de %d puntos",promedio);
	
	return 0;
}
