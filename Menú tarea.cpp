#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "");
	int x;
	float calif;
	char eleccion;
	printf ("BIENVENIDO, POR FAVOR ELIJA UN PROGRAMA: \n\nSi deseas saber si un n�mero dado es par teclea la letra 'a'\n");
	printf ("Si deseas saber si un n�mero dado es par o impar teclea la letra 'b'\n");
	printf ("Si deseas imprimir en pantalla tu calificaci�n teclea la letra 'c'\n\n");
	scanf ("%c",&eleccion);
	switch (eleccion)
		{
			case 'a':
				printf ("\nIngresa un n�mero\n");
				scanf ("%d",&x);
				if (x%2==0)
				printf ("El n�mero es par");
			break;
			case 'b':
				printf ("\nIngresa un n�mero\n");
				scanf ("%d",&x);
				(x%2==0)?printf ("El n�mero es par"):printf("El n�mero es impar");
			break;
			case 'c':
				printf ("\nPor favor ingresa la calificaci�n obtenida en el rango del 0 al 10\n");
				scanf ("%f",&calif);
				(calif<= 10 and calif >= 0)? printf ("\nTu calificaci�n es: %.2f", calif):printf("Calificaci�n incorrecta");
			break;
			default:
				printf("\nError, opci�n inv�lida");
		}
	return 0;
}
