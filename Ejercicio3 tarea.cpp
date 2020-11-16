#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	float calif;
	printf ("Por favor ingresa la calificación obtenida en el rango del 0 al 10\n");
	scanf ("%f",&calif);
	(calif<= 10 and calif >= 0)? printf ("\nTu calificación es: %.2f", calif):printf("Calificación incorrecta");
	return 0;
}
